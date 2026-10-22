/*
 * ZlogLib.dll - FUN_10001fae (0x10001FAE, 2219 B, __cdecl)
 * MD5 transform: processes one 64-byte block through the 64-round MD5
 * compression function, updating the 4-word digest in the context.
 * Transcribed from ZlogLib.dll reference bytes.
 */

extern void __cdecl FUN_1000289e(void);
extern void __cdecl FUN_10002902(void);

__declspec(naked) void FUN_10001fae(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x48
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        mov eax, dword ptr [esi]
        mov ebx, dword ptr [esi + 0x8]
        push edi
        mov edi, dword ptr [esi + 0x4]
        mov dword ptr [ebp + 0x8], eax
        mov eax, dword ptr [esi + 0xc]
        push 0x40
        push dword ptr [ebp + 0xc]
        mov dword ptr [ebp - 0x8], eax
        lea eax, [ebp - 0x48]
        push eax
        mov dword ptr [ebp - 0x4], edi
        call FUN_1000289e

        mov eax, edi
        mov ecx, ebx
        and ecx, edi
        not eax
        and eax, dword ptr [ebp - 0x8]
        mov edx, edi
        or eax, ecx
        add eax, dword ptr [ebp - 0x48]
        mov ecx, dword ptr [ebp + 0x8]
        lea ecx, [ecx + eax + 0xd76aa478]
        mov eax, ecx
        shl ecx, 0x7
        shr eax, 0x19
        or eax, ecx
        add eax, edi
        and edx, eax
        mov ecx, eax
        not ecx
        and ecx, ebx
        or ecx, edx
        add ecx, dword ptr [ebp - 0x44]
        mov edx, dword ptr [ebp - 0x8]
        lea edx, [edx + ecx + 0xe8c7b756]
        mov ecx, edx
        shl edx, 0xc
        shr ecx, 0x14
        or ecx, edx
        add ecx, eax
        mov edx, ecx
        not edx
        and edx, edi
        mov edi, ecx
        and edi, eax
        or edx, edi
        add edx, dword ptr [ebp - 0x40]
        lea edx, [ebx + edx + 0x242070db]
        mov edi, edx
        shl edx, 0x11
        shr edi, 0xf
        or edi, edx
        add edi, ecx
        mov edx, edi
        not edx
        and edx, eax
        mov ebx, ecx
        and ebx, edi
        or edx, ebx
        add edx, dword ptr [ebp - 0x3c]
        mov ebx, dword ptr [ebp - 0x4]
        lea ebx, [ebx + edx + 0xc1bdceee]
        mov edx, ebx
        shr ebx, 0xa
        shl edx, 0x16
        or edx, ebx
        add edx, edi
        mov ebx, edx
        not ebx
        mov dword ptr [ebp + 0xc], edi
        and ebx, ecx
        and edi, edx
        or ebx, edi
        add ebx, dword ptr [ebp - 0x38]
        lea eax, [eax + ebx + 0xf57c0faf]
        mov edi, eax
        shr edi, 0x19
        shl eax, 0x7
        or edi, eax
        add edi, edx
        mov dword ptr [ebp + 0x8], edi
        not edi
        and edi, dword ptr [ebp + 0xc]
        mov eax, edx
        and eax, dword ptr [ebp + 0x8]
        or edi, eax
        add edi, dword ptr [ebp - 0x34]
        lea ecx, [ecx + edi + 0x4787c62a]
        mov eax, ecx
        shl ecx, 0xc
        shr eax, 0x14
        or eax, ecx
        add eax, dword ptr [ebp + 0x8]
        mov ecx, eax
        not ecx
        and ecx, edx
        mov edi, eax
        and edi, dword ptr [ebp + 0x8]
        mov ebx, eax
        or ecx, edi
        add ecx, dword ptr [ebp - 0x30]
        mov edi, dword ptr [ebp + 0xc]
        lea edi, [edi + ecx + 0xa8304613]
        mov ecx, edi
        shl edi, 0x11
        shr ecx, 0xf
        or ecx, edi
        add ecx, eax
        and ebx, ecx
        mov edi, ecx
        not edi
        and edi, dword ptr [ebp + 0x8]
        or edi, ebx
        add edi, dword ptr [ebp - 0x2c]
        mov ebx, ecx
        lea edx, [edx + edi + 0xfd469501]
        mov edi, edx
        shr edx, 0xa
        shl edi, 0x16
        or edi, edx
        add edi, ecx
        and ebx, edi
        mov edx, edi
        not edx
        and edx, eax
        or edx, ebx
        add edx, dword ptr [ebp - 0x28]
        mov ebx, dword ptr [ebp + 0x8]
        lea ebx, [ebx + edx + 0x698098d8]
        mov edx, ebx
        shl ebx, 0x7
        shr edx, 0x19
        or edx, ebx
        add edx, edi
        mov dword ptr [ebp - 0x4], edi
        and edi, edx
        mov ebx, edx
        not ebx
        and ebx, ecx
        or ebx, edi
        add ebx, dword ptr [ebp - 0x24]
        lea eax, [eax + ebx + 0x8b44f7af]
        mov edi, eax
        shl eax, 0xc
        shr edi, 0x14
        or edi, eax
        add edi, edx
        mov eax, edi
        not eax
        and eax, dword ptr [ebp - 0x4]
        mov ebx, edi
        and ebx, edx
        or eax, ebx
        add eax, dword ptr [ebp - 0x20]
        lea ecx, [ecx + eax + 0xffff5bb1]
        mov ebx, ecx
        shr ebx, 0xf
        shl ecx, 0x11
        or ebx, ecx
        add ebx, edi
        mov ecx, edi
        and ecx, ebx
        mov eax, ebx
        not eax
        and eax, edx
        or eax, ecx
        add eax, dword ptr [ebp - 0x1c]
        mov ecx, dword ptr [ebp - 0x4]
        lea ecx, [ecx + eax + 0x895cd7be]
        mov eax, ecx
        shr ecx, 0xa
        shl eax, 0x16
        or eax, ecx
        add eax, ebx
        mov dword ptr [ebp + 0xc], ebx
        and ebx, eax
        mov ecx, eax
        not ecx
        and ecx, edi
        or ecx, ebx
        add ecx, dword ptr [ebp - 0x18]
        lea edx, [edx + ecx + 0x6b901122]
        mov ecx, edx
        shl edx, 0x7
        shr ecx, 0x19
        or ecx, edx
        add ecx, eax
        mov dword ptr [ebp + 0x8], ecx
        mov edx, eax
        and edx, dword ptr [ebp + 0x8]
        not ecx
        and ecx, dword ptr [ebp + 0xc]
        or ecx, edx
        add ecx, dword ptr [ebp - 0x14]
        lea edi, [edi + ecx + 0xfd987193]
        mov ecx, edi
        shl edi, 0xc
        shr ecx, 0x14
        or ecx, edi
        add ecx, dword ptr [ebp + 0x8]
        mov edi, eax
        mov dword ptr [ebp - 0x4], ecx
        not dword ptr [ebp - 0x4]
        and edi, dword ptr [ebp - 0x4]
        mov edx, ecx
        and edx, dword ptr [ebp + 0x8]
        mov ebx, ecx
        or edx, edi
        add edx, dword ptr [ebp - 0x10]
        mov edi, dword ptr [ebp + 0xc]
        lea edi, [edi + edx + 0xa679438e]
        mov edx, edi
        shl edi, 0x11
        shr edx, 0xf
        or edx, edi
        add edx, ecx
        mov dword ptr [ebp + 0xc], edx
        not dword ptr [ebp + 0xc]
        mov edi, dword ptr [ebp + 0xc]
        and edi, dword ptr [ebp + 0x8]
        and ebx, edx
        or edi, ebx
        add edi, dword ptr [ebp - 0xc]
        mov ebx, edx
        and ebx, dword ptr [ebp - 0x4]
        lea eax, [eax + edi + 0x49b40821]
        mov edi, eax
        shr eax, 0xa
        shl edi, 0x16
        or edi, eax
        add edi, edx
        mov eax, ecx
        and eax, edi
        or eax, ebx
        add eax, dword ptr [ebp - 0x44]
        mov ebx, dword ptr [ebp + 0x8]
        lea eax, [ebx + eax + 0xf61e2562]
        mov ebx, eax
        shr ebx, 0x1b
        shl eax, 0x5
        or ebx, eax
        mov eax, dword ptr [ebp + 0xc]
        and eax, edi
        add ebx, edi
        mov dword ptr [ebp + 0xc], eax
        mov eax, edx
        and eax, ebx
        mov dword ptr [ebp - 0x8], eax
        mov eax, dword ptr [ebp + 0xc]
        mov dword ptr [ebp + 0x8], ebx
        mov ebx, dword ptr [ebp - 0x8]
        or eax, ebx
        add eax, dword ptr [ebp - 0x30]
        lea ecx, [ecx + eax + 0xc040b340]
        mov eax, ecx
        shl ecx, 0x9
        shr eax, 0x17
        or eax, ecx
        add eax, dword ptr [ebp + 0x8]
        mov ecx, edi
        not ecx
        and ecx, dword ptr [ebp + 0x8]
        mov ebx, eax
        and ebx, edi
        or ecx, ebx
        add ecx, dword ptr [ebp - 0x1c]
        lea edx, [edx + ecx + 0x265e5a51]
        mov ecx, edx
        shl edx, 0xe
        shr ecx, 0x12
        or ecx, edx
        mov edx, dword ptr [ebp + 0x8]
        not edx
        and edx, eax
        add ecx, eax
        mov dword ptr [ebp + 0xc], ecx
        and ecx, dword ptr [ebp + 0x8]
        mov ebx, dword ptr [ebp + 0xc]
        or edx, ecx
        add edx, dword ptr [ebp - 0x48]
        lea edi, [edi + edx + 0xe9b6c7aa]
        mov ecx, edi
        shr edi, 0xc
        mov edx, eax
        not edx
        and edx, ebx
        shl ecx, 0x14
        or ecx, edi
        mov edi, eax
        add ecx, ebx
        and edi, ecx
        or edx, edi
        add edx, dword ptr [ebp - 0x34]
        mov edi, dword ptr [ebp + 0x8]
        lea edx, [edi + edx + 0xd62f105d]
        mov edi, edx
        shl edx, 0x5
        shr edi, 0x1b
        or edi, edx
        add edi, ecx
        mov dword ptr [ebp + 0x8], edi
        mov edx, ebx
        not edx
        and edx, ecx
        mov edi, ebx
        and edi, dword ptr [ebp + 0x8]
        or edx, edi
        add edx, dword ptr [ebp - 0x20]
        lea eax, [eax + edx + 0x2441453]
        mov edx, eax
        shl eax, 0x9
        shr edx, 0x17
        or edx, eax
        add edx, dword ptr [ebp + 0x8]
        mov eax, ecx
        not eax
        and eax, dword ptr [ebp + 0x8]
        mov edi, edx
        and edi, ecx
        or eax, edi
        add eax, dword ptr [ebp - 0xc]
        lea edi, [ebx + eax + 0xd8a1e681]
        mov eax, edi
        shl edi, 0xe
        shr eax, 0x12
        or eax, edi
        mov edi, dword ptr [ebp + 0x8]
        add eax, edx
        mov ebx, eax
        and ebx, dword ptr [ebp + 0x8]
        not edi
        and edi, edx
        or edi, ebx
        add edi, dword ptr [ebp - 0x38]
        mov ebx, edx
        lea ecx, [ecx + edi + 0xe7d3fbc8]
        mov edi, ecx
        shr ecx, 0xc
        shl edi, 0x14
        or edi, ecx
        add edi, eax
        and ebx, edi
        mov ecx, edx
        not ecx
        and ecx, eax
        or ecx, ebx
        add ecx, dword ptr [ebp - 0x24]
        mov ebx, dword ptr [ebp + 0x8]
        lea ebx, [ebx + ecx + 0x21e1cde6]
        mov ecx, ebx
        shl ebx, 0x5
        mov dword ptr [ebp - 0x4], edi
        shr ecx, 0x1b
        or ecx, ebx
        mov ebx, eax
        not ebx
        and ebx, edi
        add ecx, edi
        mov edi, eax
        and edi, ecx
        or ebx, edi
        add ebx, dword ptr [ebp - 0x10]
        lea edx, [edx + ebx + 0xc33707d6]
        mov edi, edx
        shl edx, 0x9
        shr edi, 0x17
        or edi, edx
        mov edx, dword ptr [ebp - 0x4]
        add edi, ecx
        not edx
        and edx, ecx
        mov ebx, edi
        and ebx, dword ptr [ebp - 0x4]
        or edx, ebx
        add edx, dword ptr [ebp - 0x3c]
        lea eax, [eax + edx + 0xf4d50d87]
        mov edx, eax
        shl eax, 0xe
        shr edx, 0x12
        or edx, eax
        add edx, edi
        mov eax, ecx
        not eax
        and eax, edi
        mov ebx, edx
        and ebx, ecx
        or eax, ebx
        add eax, dword ptr [ebp - 0x28]
        mov ebx, dword ptr [ebp - 0x4]
        lea eax, [ebx + eax + 0x455a14ed]
        mov ebx, eax
        shr eax, 0xc
        shl ebx, 0x14
        or ebx, eax
        add ebx, edx
        mov eax, edi
        mov dword ptr [ebp - 0x4], ebx
        not eax
        mov ebx, edi
        and eax, edx
        and ebx, dword ptr [ebp - 0x4]
        or eax, ebx
        add eax, dword ptr [ebp - 0x14]
        lea ecx, [ecx + eax + 0xa9e3e905]
        mov eax, ecx
        shr eax, 0x1b
        shl ecx, 0x5
        or eax, ecx
        add eax, dword ptr [ebp - 0x4]
        mov ecx, edx
        mov dword ptr [ebp + 0x8], eax
        and ecx, dword ptr [ebp + 0x8]
        mov ebx, dword ptr [ebp + 0x8]
        mov eax, edx
        not eax
        and eax, dword ptr [ebp - 0x4]
        or eax, ecx
        add eax, dword ptr [ebp - 0x40]
        mov ecx, dword ptr [ebp - 0x4]
        lea edi, [edi + eax + 0xfcefa3f8]
        mov eax, edi
        shl edi, 0x9
        shr eax, 0x17
        or eax, edi
        add eax, ebx
        mov edi, eax
        and edi, dword ptr [ebp - 0x4]
        not ecx
        and ecx, ebx
        or ecx, edi
        add ecx, dword ptr [ebp - 0x2c]
        lea edx, [edx + ecx + 0x676f02d9]
        mov ecx, edx
        shl edx, 0xe
        shr ecx, 0x12
        or ecx, edx
        add ecx, eax
        mov edx, ebx
        not edx
        and edx, eax
        mov edi, ecx
        and edi, ebx
        or edx, edi
        add edx, dword ptr [ebp - 0x18]
        mov edi, dword ptr [ebp - 0x4]
        lea edi, [edi + edx + 0x8d2a4c8a]
        mov edx, edi
        shr edi, 0xc
        shl edx, 0x14
        or edx, edi
        mov edi, eax
        xor edi, ecx
        add edx, ecx
        xor edi, edx
        add edi, dword ptr [ebp - 0x34]
        lea ebx, [ebx + edi + 0xfffa3942]
        mov edi, ebx
        shl ebx, 0x4
        shr edi, 0x1c
        or edi, ebx
        mov ebx, ecx
        xor ebx, edx
        add edi, edx
        xor ebx, edi
        add ebx, dword ptr [ebp - 0x28]
        lea eax, [eax + ebx + 0x8771f681]
        mov ebx, eax
        shl eax, 0xb
        shr ebx, 0x15
        or ebx, eax
        add ebx, edi
        mov eax, ebx
        xor eax, edx
        xor eax, edi
        add eax, dword ptr [ebp - 0x1c]
        lea ecx, [ecx + eax + 0x6d9d6122]
        mov eax, ecx
        shr eax, 0x10
        shl ecx, 0x10
        or eax, ecx
        add eax, ebx
        mov dword ptr [ebp + 0xc], eax
        mov ecx, ebx
        xor ecx, eax
        mov eax, ecx
        xor eax, edi
        add eax, dword ptr [ebp - 0x10]
        lea edx, [edx + eax + 0xfde5380c]
        mov eax, edx
        shr edx, 0x9
        shl eax, 0x17
        or eax, edx
        add eax, dword ptr [ebp + 0xc]
        xor ecx, eax
        add ecx, dword ptr [ebp - 0x44]
        lea edi, [edi + ecx + 0xa4beea44]
        mov ecx, edi
        shl edi, 0x4
        shr ecx, 0x1c
        or ecx, edi
        mov edi, dword ptr [ebp + 0xc]
        add ecx, eax
        mov edx, edi
        xor edx, eax
        xor edx, ecx
        add edx, dword ptr [ebp - 0x38]
        lea ebx, [ebx + edx + 0x4bdecfa9]
        mov edx, ebx
        shl ebx, 0xb
        shr edx, 0x15
        or edx, ebx
        add edx, ecx
        mov ebx, edx
        xor ebx, eax
        xor ebx, ecx
        add ebx, dword ptr [ebp - 0x2c]
        mov dword ptr [ebp + 0x8], edx
        lea ebx, [edi + ebx + 0xf6bb4b60]
        mov edi, ebx
        shl ebx, 0x10
        shr edi, 0x10
        or edi, ebx
        add edi, edx
        xor dword ptr [ebp + 0x8], edi
        mov ebx, dword ptr [ebp + 0x8]
        xor ebx, ecx
        add ebx, dword ptr [ebp - 0x20]
        lea ebx, [eax + ebx + 0xbebfbc70]
        mov eax, ebx
        shr ebx, 0x9
        shl eax, 0x17
        or eax, ebx
        mov ebx, dword ptr [ebp + 0x8]
        add eax, edi
        xor ebx, eax
        add ebx, dword ptr [ebp - 0x14]
        lea ebx, [ecx + ebx + 0x289b7ec6]
        mov ecx, ebx
        shl ebx, 0x4
        shr ecx, 0x1c
        or ecx, ebx
        mov ebx, edi
        xor ebx, eax
        add ecx, eax
        xor ebx, ecx
        add ebx, dword ptr [ebp - 0x48]
        lea edx, [edx + ebx + 0xeaa127fa]
        mov ebx, edx
        shl edx, 0xb
        shr ebx, 0x15
        or ebx, edx
        add ebx, ecx
        mov edx, ebx
        xor edx, eax
        xor edx, ecx
        add edx, dword ptr [ebp - 0x3c]
        mov dword ptr [ebp + 0x8], ebx
        lea edx, [edi + edx + 0xd4ef3085]
        mov edi, edx
        shr edi, 0x10
        shl edx, 0x10
        or edi, edx
        add edi, ebx
        xor dword ptr [ebp + 0x8], edi
        mov edx, dword ptr [ebp + 0x8]
        xor edx, ecx
        add edx, dword ptr [ebp - 0x30]
        lea edx, [eax + edx + 0x4881d05]
        mov eax, edx
        shr edx, 0x9
        shl eax, 0x17
        or eax, edx
        mov edx, dword ptr [ebp + 0x8]
        add eax, edi
        xor edx, eax
        add edx, dword ptr [ebp - 0x24]
        lea edx, [ecx + edx + 0xd9d4d039]
        mov ecx, edx
        shl edx, 0x4
        shr ecx, 0x1c
        or ecx, edx
        add ecx, eax
        mov edx, edi
        xor edx, eax
        xor edx, ecx
        add edx, dword ptr [ebp - 0x18]
        lea ebx, [ebx + edx + 0xe6db99e5]
        mov edx, ebx
        shl ebx, 0xb
        shr edx, 0x15
        or edx, ebx
        add edx, ecx
        mov ebx, edx
        xor ebx, eax
        xor ebx, ecx
        add ebx, dword ptr [ebp - 0xc]
        lea ebx, [edi + ebx + 0x1fa27cf8]
        mov edi, ebx
        shl ebx, 0x10
        shr edi, 0x10
        or edi, ebx
        add edi, edx
        mov ebx, edx
        xor ebx, edi
        xor ebx, ecx
        add ebx, dword ptr [ebp - 0x40]
        lea eax, [eax + ebx + 0xc4ac5665]
        mov ebx, eax
        shr eax, 0x9
        shl ebx, 0x17
        or ebx, eax
        mov eax, edx
        add ebx, edi
        not eax
        or eax, ebx
        xor eax, edi
        add eax, dword ptr [ebp - 0x48]
        lea ecx, [ecx + eax + 0xf4292244]
        mov eax, ecx
        shl ecx, 0x6
        shr eax, 0x1a
        or eax, ecx
        mov ecx, edi
        not ecx
        add eax, ebx
        or ecx, eax
        xor ecx, ebx
        add ecx, dword ptr [ebp - 0x2c]
        lea edx, [edx + ecx + 0x432aff97]
        mov ecx, edx
        shl edx, 0xa
        shr ecx, 0x16
        or ecx, edx
        mov edx, ebx
        not edx
        add ecx, eax
        or edx, ecx
        xor edx, eax
        add edx, dword ptr [ebp - 0x10]
        lea edi, [edi + edx + 0xab9423a7]
        mov edx, edi
        shr edx, 0x11
        shl edi, 0xf
        or edx, edi
        add edx, ecx
        mov edi, eax
        not edi
        or edi, edx
        xor edi, ecx
        add edi, dword ptr [ebp - 0x34]
        lea ebx, [ebx + edi + 0xfc93a039]
        mov edi, ebx
        shr ebx, 0xb
        shl edi, 0x15
        or edi, ebx
        add edi, edx
        mov ebx, ecx
        not ebx
        or ebx, edi
        xor ebx, edx
        add ebx, dword ptr [ebp - 0x18]
        lea ebx, [eax + ebx + 0x655b59c3]
        mov eax, ebx
        shl ebx, 0x6
        shr eax, 0x1a
        or eax, ebx
        add eax, edi
        mov ebx, edx
        not ebx
        or ebx, eax
        xor ebx, edi
        add ebx, dword ptr [ebp - 0x3c]
        lea ebx, [ecx + ebx + 0x8f0ccc92]
        mov ecx, ebx
        shl ebx, 0xa
        shr ecx, 0x16
        or ecx, ebx
        add ecx, eax
        mov ebx, edi
        not ebx
        or ebx, ecx
        xor ebx, eax
        add ebx, dword ptr [ebp - 0x20]
        lea ebx, [edx + ebx + 0xffeff47d]
        mov edx, ebx
        shl ebx, 0xf
        shr edx, 0x11
        or edx, ebx
        add edx, ecx
        mov ebx, eax
        not ebx
        or ebx, edx
        xor ebx, ecx
        add ebx, dword ptr [ebp - 0x44]
        lea ebx, [edi + ebx + 0x85845dd1]
        mov edi, ebx
        shr ebx, 0xb
        shl edi, 0x15
        or edi, ebx
        mov ebx, ecx
        not ebx
        add edi, edx
        or ebx, edi
        xor ebx, edx
        add ebx, dword ptr [ebp - 0x28]
        lea ebx, [eax + ebx + 0x6fa87e4f]
        mov eax, ebx
        shl ebx, 0x6
        shr eax, 0x1a
        or eax, ebx
        add eax, edi
        mov ebx, edx
        not ebx
        or ebx, eax
        xor ebx, edi
        add ebx, dword ptr [ebp - 0xc]
        lea ebx, [ecx + ebx + 0xfe2ce6e0]
        mov ecx, ebx
        shl ebx, 0xa
        shr ecx, 0x16
        or ecx, ebx
        mov ebx, edi
        add ecx, eax
        not ebx
        or ebx, ecx
        xor ebx, eax
        add ebx, dword ptr [ebp - 0x30]
        push 0x40
        lea ebx, [edx + ebx + 0xa3014314]
        mov edx, ebx
        shl ebx, 0xf
        shr edx, 0x11
        or edx, ebx
        add edx, ecx
        mov ebx, eax
        not ebx
        or ebx, edx
        xor ebx, ecx
        add ebx, dword ptr [ebp - 0x14]
        push 0x0
        lea ebx, [edi + ebx + 0x4e0811a1]
        mov edi, ebx
        shr ebx, 0xb
        shl edi, 0x15
        or edi, ebx
        mov ebx, ecx
        add edi, edx
        not ebx
        or ebx, edi
        xor ebx, edx
        add ebx, dword ptr [ebp - 0x38]
        lea ebx, [eax + ebx + 0xf7537e82]
        mov eax, ebx
        shl ebx, 0x6
        shr eax, 0x1a
        or eax, ebx
        add eax, edi
        mov ebx, edx
        not ebx
        or ebx, eax
        xor ebx, edi
        add ebx, dword ptr [ebp - 0x1c]
        add dword ptr [esi], eax
        lea ecx, [ecx + ebx + 0xbd3af235]
        mov ebx, ecx
        shl ecx, 0xa
        shr ebx, 0x16
        or ebx, ecx
        add ebx, eax
        mov ecx, edi
        not ecx
        or ecx, ebx
        xor ecx, eax
        add ecx, dword ptr [ebp - 0x40]
        add dword ptr [esi + 0xc], ebx
        lea edx, [edx + ecx + 0x2ad7d2bb]
        mov ecx, edx
        shl edx, 0xf
        shr ecx, 0x11
        or ecx, edx
        mov edx, eax
        add ecx, ebx
        add dword ptr [esi + 0x8], ecx
        not edx
        or edx, ecx
        xor edx, ebx
        add edx, dword ptr [ebp - 0x24]
        lea edi, [edi + edx + 0xeb86d391]
        mov eax, edi
        shl eax, 0x15
        shr edi, 0xb
        or eax, edi
        add eax, ecx
        add dword ptr [esi + 0x4], eax
        lea eax, [ebp - 0x48]
        push eax
        call FUN_10002902
        add esp, 0x18
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
