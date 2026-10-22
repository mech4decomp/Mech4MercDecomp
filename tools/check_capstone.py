try:
    import capstone
    print("capstone available, version:", capstone.__version__)
except ImportError:
    print("capstone NOT available")
