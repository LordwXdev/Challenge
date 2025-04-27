import os
from solana.rpc.async_api import AsyncClient
from solana.publickey import PublicKey
from solana.keypair import Keypair
from solana.transaction import Transaction
from solders.system_program import TransferParams, transfer
import asyncio

# Configuration
RPC_ENDPOINT = "https://api.mainnet-beta.solana.com"  # Free public node (may be slow)
WALLET_PRIVATE_KEY = os.getenv("WALLET_PRIVATE_KEY")  # Use env var
TOKEN_ADDRESS = "J2JtfsdDaQWbkJdSwF83J66XBds5SRoP1RkYxwmgpump"  # Example token (replace if needed)
AMOUNT_TO_SPEND = 0.1  # Amount in SOL

# Initialize wallet
keypair = Keypair.from_base58_string(WALLET_PRIVATE_KEY)
wallet_pubkey = keypair.public_key

async def buy_memecoin():
    async with AsyncClient(RPC_ENDPOINT) as client:
        if not await client.is_connected():
            print("Failed to connect to Solana network")
            return

        print(f"Preparing to send {AMOUNT_TO_SPEND} SOL to simulate a buy for {TOKEN_ADDRESS}")
        
        # Dummy transaction (replace with real swap logic later)
        transaction = Transaction()
        transfer_instruction = transfer(
            TransferParams(
                from_pubkey=wallet_pubkey,
                to_pubkey=PublicKey(TOKEN_ADDRESS),  # Dummy recipient
                lamports=int(AMOUNT_TO_SPEND * 1_000_000_000)  # Convert SOL to lamports
            )
        )
        transaction.add(transfer_instruction)

        try:
            response = await client.send_transaction(transaction, keypair)
            print(f"Transaction sent: {response}")
        except Exception as e:
            print(f"Error: {e}")

if __name__ == "__main__":
    asyncio.run(buy_memecoin())