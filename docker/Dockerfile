FROM ubuntu:18.04
MAINTAINER Davide

RUN apt-get update
RUN apt-get install -y build-essential
RUN apt-get install -y gdb
RUN apt-get install -y lcov
RUN apt-get install -y git
RUN apt-get install -y vim
RUN apt-get install -y wget
RUN apt-get install -y htop
RUN apt-get install -y unzip
# openjdk is needed for bazel coverage
RUN apt-get install -y default-jdk
# bazel
RUN wget https://github.com/bazelbuild/bazel/releases/download/8.2.1/bazel-8.2.1-installer-linux-x86_64.sh \
    && chmod +x bazel-8.2.1-installer-linux-x86_64.sh \
    && ./bazel-8.2.1-installer-linux-x86_64.sh

# Create a non-root user and group
RUN groupadd -r appuser && useradd -r -g appuser --create-home appuser

# Set up work directory with correct permissions
WORKDIR /home/appuser/app
RUN chown -R appuser:appuser /home/appuser/app

# Switch to the non-root user
USER appuser

# Copy files (adjust path if needed)
COPY --chown=appuser:appuser . .

