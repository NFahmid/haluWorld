import openai

openai.api_key = "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"

response = openai.ChatCompletion.create(
    model="gpt-4",
    messages=[
        {"role": "user", "content": "Hello, who are you?"}
    ]
)

print(response['choices'][0]['message']['content'])
