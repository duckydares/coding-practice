from xml.etree.ElementPath import find
# Demonstrative file showing how to install these packages
# with:
# python3 setup.py sdist bdist_wheel
# pip install .
from setuptools import setup, find_packages

setup(
    name='coding-practice',
    version='0.0',
    packages=find_packages(),
    description='Various coding solutions to practice problems.',
    long_description=open('README.md').read(),
    long_description_context_type='text/markdown',
    author='Ducky',
    author_email='dreadducky@proton.me',
    url='https://github.com/duckydares/coding-practice',
    python_requires='>=3.12.0',
)