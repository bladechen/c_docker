FROM scratch

# Add the binary to the container
ADD hello_world /hello_world

# Set it as the default entrypoint
ENTRYPOINT ["/hello_world"]
