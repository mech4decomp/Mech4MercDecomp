/*
 * FUN_1000f440 (2355 B) - __stdcall RET 0x8. MD5 compression round
 * (F/G/H/I mix + rotate). Straight-line arithmetic, no branches.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1000fdd0(void);

__declspec(naked) void __cdecl FUN_1000f440(void)
{
    __asm {
        sub     esp, 0x40
        push    ebx
        mov     edx, dword ptr [esp + 0x4c]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x50]
        push    edi
        push    0x40
        push    edx
        mov     eax, dword ptr [esi]
        mov     edi, dword ptr [esi + 0x4]
        mov     ebx, dword ptr [esi + 0x8]
        mov     ebp, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0x5c], eax
        lea     eax, [esp + 0x18]
        push    eax
        call    FUN_1000fdd0
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, edi
        not     ecx
        mov     edx, ebx
        and     ecx, ebp
        and     edx, edi
        or      ecx, edx
        mov     edx, edi
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x54]
        lea     ecx, [eax + ecx + 0xd76aa478]
        mov     eax, ecx
        shr     eax, 0x19
        shl     ecx, 7
        or      eax, ecx
        add     eax, edi
        mov     ecx, eax
        and     edx, eax
        not     ecx
        and     ecx, ebx
        or      ecx, edx
        mov     edx, dword ptr [esp + 0x14]
        add     ecx, edx
        lea     edx, [ecx + ebp + 0xe8c7b756]
        mov     ecx, edx
        shr     ecx, 0x14
        shl     edx, 0xc
        or      ecx, edx
        add     ecx, eax
        mov     edx, ecx
        mov     ebp, ecx
        not     edx
        and     edx, edi
        and     ebp, eax
        or      edx, ebp
        mov     ebp, dword ptr [esp + 0x18]
        add     edx, ebp
        mov     ebp, ecx
        lea     ebx, [ebx + edx + 0x242070db]
        mov     edx, ebx
        shr     edx, 0xf
        shl     ebx, 0x11
        or      edx, ebx
        add     edx, ecx
        mov     ebx, edx
        and     ebp, edx
        not     ebx
        and     ebx, eax
        or      ebx, ebp
        mov     ebp, dword ptr [esp + 0x1c]
        add     ebx, ebp
        lea     ebx, [edi + ebx + 0xc1bdceee]
        mov     edi, ebx
        shl     edi, 0x16
        shr     ebx, 0xa
        or      edi, ebx
        mov     ebx, edx
        add     edi, edx
        mov     dword ptr [esp + 0x54], edi
        mov     ebp, dword ptr [esp + 0x54]
        not     edi
        and     edi, ecx
        and     ebx, ebp
        mov     ebp, dword ptr [esp + 0x20]
        or      edi, ebx
        add     edi, ebp
        mov     ebx, dword ptr [esp + 0x54]
        mov     ebp, ebx
        lea     eax, [eax + edi + 0xf57c0faf]
        mov     edi, eax
        shr     edi, 0x19
        shl     eax, 7
        or      edi, eax
        add     edi, ebx
        mov     eax, edi
        and     ebp, edi
        not     eax
        and     eax, edx
        or      eax, ebp
        mov     ebp, dword ptr [esp + 0x24]
        add     eax, ebp
        lea     ecx, [ecx + eax + 0x4787c62a]
        mov     eax, ecx
        shr     eax, 0x14
        shl     ecx, 0xc
        or      eax, ecx
        add     eax, edi
        mov     ecx, eax
        mov     ebp, eax
        not     ecx
        and     ecx, ebx
        and     ebp, edi
        or      ecx, ebp
        mov     ebp, dword ptr [esp + 0x28]
        add     ecx, ebp
        mov     ebp, eax
        lea     edx, [edx + ecx + 0xa8304613]
        mov     ecx, edx
        shr     ecx, 0xf
        shl     edx, 0x11
        or      ecx, edx
        add     ecx, eax
        mov     edx, ecx
        and     ebp, ecx
        not     edx
        and     edx, edi
        or      edx, ebp
        mov     ebp, dword ptr [esp + 0x2c]
        add     edx, ebp
        lea     ebx, [ebx + edx + 0xfd469501]
        mov     edx, ebx
        shl     edx, 0x16
        shr     ebx, 0xa
        or      edx, ebx
        mov     ebx, ecx
        add     edx, ecx
        mov     dword ptr [esp + 0x54], edx
        mov     ebp, dword ptr [esp + 0x54]
        not     edx
        and     edx, eax
        and     ebx, ebp
        mov     ebp, dword ptr [esp + 0x30]
        or      edx, ebx
        add     edx, ebp
        mov     ebx, dword ptr [esp + 0x54]
        mov     ebp, ebx
        lea     edi, [edi + edx + 0x698098d8]
        mov     edx, edi
        shr     edx, 0x19
        shl     edi, 7
        or      edx, edi
        add     edx, ebx
        mov     edi, edx
        and     ebp, edx
        not     edi
        and     edi, ecx
        or      edi, ebp
        mov     ebp, dword ptr [esp + 0x34]
        add     edi, ebp
        lea     eax, [eax + edi + 0x8b44f7af]
        mov     edi, eax
        shr     edi, 0x14
        shl     eax, 0xc
        or      edi, eax
        add     edi, edx
        mov     eax, edi
        not     eax
        mov     ebp, edi
        and     eax, ebx
        and     ebp, edx
        or      eax, ebp
        mov     ebp, dword ptr [esp + 0x38]
        add     eax, ebp
        mov     ebp, edi
        lea     ecx, [ecx + eax + 0xffff5bb1]
        mov     eax, ecx
        shr     eax, 0xf
        shl     ecx, 0x11
        or      eax, ecx
        add     eax, edi
        mov     ecx, eax
        and     ebp, eax
        not     ecx
        and     ecx, edx
        or      ecx, ebp
        mov     ebp, dword ptr [esp + 0x3c]
        add     ecx, ebp
        lea     ebx, [ebx + ecx + 0x895cd7be]
        mov     ecx, ebx
        shl     ecx, 0x16
        shr     ebx, 0xa
        or      ecx, ebx
        mov     ebx, eax
        add     ecx, eax
        mov     dword ptr [esp + 0x54], ecx
        mov     ebp, dword ptr [esp + 0x54]
        not     ecx
        and     ecx, edi
        and     ebx, ebp
        mov     ebp, dword ptr [esp + 0x40]
        or      ecx, ebx
        add     ecx, ebp
        mov     ebx, dword ptr [esp + 0x54]
        mov     ebp, ebx
        lea     edx, [edx + ecx + 0x6b901122]
        mov     ecx, edx
        shr     ecx, 0x19
        shl     edx, 7
        or      ecx, edx
        add     ecx, ebx
        mov     edx, ecx
        and     ebp, ecx
        not     edx
        and     edx, eax
        or      edx, ebp
        mov     ebp, dword ptr [esp + 0x44]
        add     edx, ebp
        lea     edi, [edi + edx + 0xfd987193]
        mov     edx, edi
        shr     edx, 0x14
        shl     edi, 0xc
        or      edx, edi
        add     edx, ecx
        mov     ebp, edx
        mov     edi, edx
        not     ebp
        and     edi, ecx
        and     ebx, ebp
        or      edi, ebx
        mov     ebx, dword ptr [esp + 0x48]
        add     edi, ebx
        mov     ebx, edx
        lea     eax, [eax + edi + 0xa679438e]
        mov     edi, eax
        shr     edi, 0xf
        shl     eax, 0x11
        or      edi, eax
        add     edi, edx
        mov     eax, edi
        and     ebx, edi
        not     eax
        mov     dword ptr [esp + 0x58], eax
        and     eax, ecx
        or      eax, ebx
        mov     ebx, dword ptr [esp + 0x4c]
        add     eax, ebx
        mov     ebx, dword ptr [esp + 0x54]
        lea     ebx, [ebx + eax + 0x49b40821]
        mov     eax, ebx
        shl     eax, 0x16
        shr     ebx, 0xa
        or      eax, ebx
        mov     ebx, edx
        add     eax, edi
        mov     dword ptr [esp + 0x54], eax
        and     ebx, eax
        mov     eax, edi
        and     eax, ebp
        mov     ebp, dword ptr [esp + 0x14]
        or      ebx, eax
        add     ebx, ebp
        mov     ebp, edi
        lea     ecx, [ecx + ebx + 0xf61e2562]
        mov     ebx, dword ptr [esp + 0x54]
        mov     eax, ecx
        shr     eax, 0x1b
        shl     ecx, 5
        or      eax, ecx
        mov     ecx, dword ptr [esp + 0x58]
        add     eax, ebx
        and     ecx, ebx
        and     ebp, eax
        or      ecx, ebp
        mov     ebp, dword ptr [esp + 0x28]
        add     ecx, ebp
        mov     ebp, dword ptr [esp + 0x54]
        not     ebx
        lea     edx, [edx + ecx + 0xc040b340]
        and     ebx, eax
        mov     ecx, edx
        shr     ecx, 0x17
        shl     edx, 9
        or      ecx, edx
        add     ecx, eax
        mov     edx, ecx
        and     edx, ebp
        mov     ebp, dword ptr [esp + 0x3c]
        or      ebx, edx
        add     ebx, ebp
        lea     edi, [edi + ebx + 0x265e5a51]
        mov     edx, edi
        shr     edx, 0x12
        shl     edi, 0xe
        or      edx, edi
        mov     edi, eax
        add     edx, ecx
        not     edi
        mov     ebx, edx
        and     edi, ecx
        and     ebx, eax
        or      edi, ebx
        mov     ebx, dword ptr [esp + 0x10]
        add     edi, ebx
        mov     ebx, dword ptr [esp + 0x54]
        lea     ebx, [ebx + edi + 0xe9b6c7aa]
        mov     edi, ebx
        shl     edi, 0x14
        shr     ebx, 0xc
        or      edi, ebx
        mov     ebx, ecx
        add     edi, edx
        mov     dword ptr [esp + 0x54], edi
        mov     edi, ecx
        mov     ebp, dword ptr [esp + 0x54]
        not     edi
        and     edi, edx
        and     ebx, ebp
        mov     ebp, dword ptr [esp + 0x24]
        or      edi, ebx
        add     edi, ebp
        mov     ebx, dword ptr [esp + 0x54]
        lea     eax, [eax + edi + 0xd62f105d]
        mov     edi, eax
        shr     edi, 0x1b
        shl     eax, 5
        or      edi, eax
        mov     eax, edx
        add     edi, ebx
        not     eax
        mov     ebp, edx
        and     eax, ebx
        and     ebp, edi
        or      eax, ebp
        mov     ebp, dword ptr [esp + 0x38]
        add     eax, ebp
        mov     ebp, dword ptr [esp + 0x54]
        not     ebx
        lea     ecx, [ecx + eax + 0x2441453]
        and     ebx, edi
        mov     eax, ecx
        shr     eax, 0x17
        shl     ecx, 9
        or      eax, ecx
        add     eax, edi
        mov     ecx, eax
        and     ecx, ebp
        mov     ebp, dword ptr [esp + 0x4c]
        or      ebx, ecx
        add     ebx, ebp
        lea     edx, [edx + ebx + 0xd8a1e681]
        mov     ecx, edx
        shr     ecx, 0x12
        shl     edx, 0xe
        or      ecx, edx
        mov     edx, edi
        add     ecx, eax
        not     edx
        mov     ebx, ecx
        and     edx, eax
        and     ebx, edi
        or      edx, ebx
        mov     ebx, dword ptr [esp + 0x20]
        add     edx, ebx
        mov     ebx, dword ptr [esp + 0x54]
        lea     ebx, [ebx + edx + 0xe7d3fbc8]
        mov     edx, ebx
        shl     edx, 0x14
        shr     ebx, 0xc
        or      edx, ebx
        mov     ebx, eax
        add     edx, ecx
        mov     dword ptr [esp + 0x54], edx
        mov     edx, eax
        mov     ebp, dword ptr [esp + 0x54]
        not     edx
        and     edx, ecx
        and     ebx, ebp
        mov     ebp, dword ptr [esp + 0x34]
        or      edx, ebx
        add     edx, ebp
        mov     ebx, dword ptr [esp + 0x54]
        mov     ebp, ecx
        lea     edi, [edi + edx + 0x21e1cde6]
        mov     edx, edi
        shr     edx, 0x1b
        shl     edi, 5
        or      edx, edi
        mov     edi, ecx
        add     edx, ebx
        not     edi
        and     edi, ebx
        and     ebp, edx
        or      edi, ebp
        mov     ebp, dword ptr [esp + 0x48]
        add     edi, ebp
        mov     ebp, dword ptr [esp + 0x54]
        not     ebx
        lea     eax, [eax + edi + 0xc33707d6]
        and     ebx, edx
        mov     edi, eax
        shr     edi, 0x17
        shl     eax, 9
        or      edi, eax
        add     edi, edx
        mov     eax, edi
        and     eax, ebp
        mov     ebp, dword ptr [esp + 0x1c]
        or      ebx, eax
        add     ebx, ebp
        lea     ecx, [ecx + ebx + 0xf4d50d87]
        mov     eax, ecx
        shr     eax, 0x12
        shl     ecx, 0xe
        or      eax, ecx
        mov     ecx, edx
        add     eax, edi
        not     ecx
        mov     ebx, eax
        and     ecx, edi
        and     ebx, edx
        or      ecx, ebx
        mov     ebx, dword ptr [esp + 0x30]
        add     ecx, ebx
        mov     ebx, dword ptr [esp + 0x54]
        lea     ebx, [ebx + ecx + 0x455a14ed]
        mov     ecx, ebx
        shl     ecx, 0x14
        shr     ebx, 0xc
        or      ecx, ebx
        mov     ebx, edi
        add     ecx, eax
        mov     dword ptr [esp + 0x54], ecx
        mov     ecx, edi
        mov     ebp, dword ptr [esp + 0x54]
        not     ecx
        and     ecx, eax
        and     ebx, ebp
        mov     ebp, dword ptr [esp + 0x44]
        or      ecx, ebx
        add     ecx, ebp
        mov     ebx, dword ptr [esp + 0x54]
        mov     ebp, eax
        lea     edx, [edx + ecx + 0xa9e3e905]
        mov     ecx, edx
        shr     ecx, 0x1b
        shl     edx, 5
        or      ecx, edx
        mov     edx, eax
        add     ecx, ebx
        not     edx
        and     edx, ebx
        and     ebp, ecx
        or      edx, ebp
        mov     ebp, dword ptr [esp + 0x18]
        add     edx, ebp
        mov     ebp, dword ptr [esp + 0x54]
        not     ebx
        lea     edi, [edi + edx + 0xfcefa3f8]
        and     ebx, ecx
        mov     edx, edi
        shr     edx, 0x17
        shl     edi, 9
        or      edx, edi
        add     edx, ecx
        mov     edi, edx
        and     edi, ebp
        mov     ebp, dword ptr [esp + 0x2c]
        or      ebx, edi
        add     ebx, ebp
        lea     eax, [eax + ebx + 0x676f02d9]
        mov     edi, eax
        shr     edi, 0x12
        shl     eax, 0xe
        or      edi, eax
        mov     eax, ecx
        add     edi, edx
        not     eax
        mov     ebx, edi
        and     eax, edx
        and     ebx, ecx
        or      eax, ebx
        mov     ebx, dword ptr [esp + 0x40]
        add     eax, ebx
        mov     ebx, dword ptr [esp + 0x54]
        lea     ebx, [ebx + eax + 0x8d2a4c8a]
        mov     eax, ebx
        shl     eax, 0x14
        shr     ebx, 0xc
        or      eax, ebx
        add     eax, edi
        mov     ebp, dword ptr [esp + 0x24]
        mov     ebx, edx
        xor     ebx, edi
        xor     ebx, eax
        add     ebx, ebp
        mov     ebp, dword ptr [esp + 0x30]
        lea     ecx, [ecx + ebx + 0xfffa3942]
        mov     ebx, ecx
        shr     ebx, 0x1c
        shl     ecx, 4
        or      ebx, ecx
        mov     ecx, edi
        add     ebx, eax
        xor     ecx, eax
        xor     ecx, ebx
        add     ecx, ebp
        mov     ebp, dword ptr [esp + 0x3c]
        lea     ecx, [edx + ecx + 0x8771f681]
        mov     edx, ecx
        shr     edx, 0x15
        shl     ecx, 0xb
        or      edx, ecx
        add     edx, ebx
        mov     ecx, edx
        xor     ecx, eax
        xor     ecx, ebx
        add     ecx, ebp
        mov     ebp, dword ptr [esp + 0x48]
        lea     ecx, [edi + ecx + 0x6d9d6122]
        mov     edi, ecx
        shr     edi, 0x10
        shl     ecx, 0x10
        or      edi, ecx
        mov     ecx, edx
        add     edi, edx
        xor     ecx, edi
        mov     dword ptr [esp + 0x54], ecx
        xor     ecx, ebx
        add     ecx, ebp
        mov     ebp, dword ptr [esp + 0x14]
        lea     eax, [eax + ecx + 0xfde5380c]
        mov     ecx, eax
        shl     ecx, 0x17
        shr     eax, 9
        or      ecx, eax
        mov     eax, dword ptr [esp + 0x54]
        add     ecx, edi
        xor     eax, ecx
        add     eax, ebp
        mov     ebp, dword ptr [esp + 0x20]
        lea     ebx, [ebx + eax + 0xa4beea44]
        mov     eax, ebx
        shr     eax, 0x1c
        shl     ebx, 4
        or      eax, ebx
        mov     ebx, edi
        add     eax, ecx
        xor     ebx, ecx
        xor     ebx, eax
        add     ebx, ebp
        mov     ebp, dword ptr [esp + 0x2c]
        lea     edx, [edx + ebx + 0x4bdecfa9]
        mov     ebx, edx
        shr     ebx, 0x15
        shl     edx, 0xb
        or      ebx, edx
        add     ebx, eax
        mov     edx, ebx
        xor     edx, ecx
        xor     edx, eax
        add     edx, ebp
        lea     edi, [edi + edx + 0xf6bb4b60]
        mov     edx, edi
        shr     edx, 0x10
        shl     edi, 0x10
        or      edx, edi
        mov     edi, ebx
        add     edx, ebx
        xor     edi, edx
        mov     ebp, edi
        xor     ebp, eax
        add     ebp, dword ptr [esp + 0x38]
        lea     ebp, [ecx + ebp + 0xbebfbc70]
        mov     ecx, ebp
        shl     ecx, 0x17
        shr     ebp, 9
        or      ecx, ebp
        mov     ebp, dword ptr [esp + 0x44]
        add     ecx, edx
        xor     edi, ecx
        add     edi, ebp
        mov     ebp, dword ptr [esp + 0x10]
        lea     edi, [eax + edi + 0x289b7ec6]
        mov     eax, edi
        shr     eax, 0x1c
        shl     edi, 4
        or      eax, edi
        mov     edi, edx
        add     eax, ecx
        xor     edi, ecx
        xor     edi, eax
        add     edi, ebp
        mov     ebp, dword ptr [esp + 0x1c]
        lea     ebx, [ebx + edi + 0xeaa127fa]
        mov     edi, ebx
        shr     edi, 0x15
        shl     ebx, 0xb
        or      edi, ebx
        add     edi, eax
        mov     ebx, edi
        xor     ebx, ecx
        xor     ebx, eax
        add     ebx, ebp
        lea     edx, [edx + ebx + 0xd4ef3085]
        mov     ebx, edx
        shr     ebx, 0x10
        shl     edx, 0x10
        or      ebx, edx
        mov     edx, edi
        add     ebx, edi
        xor     edx, ebx
        mov     ebp, edx
        xor     ebp, eax
        add     ebp, dword ptr [esp + 0x28]
        lea     ebp, [ecx + ebp + 0x4881d05]
        mov     ecx, ebp
        shl     ecx, 0x17
        shr     ebp, 9
        or      ecx, ebp
        mov     ebp, dword ptr [esp + 0x34]
        add     ecx, ebx
        xor     edx, ecx
        add     edx, ebp
        lea     edx, [eax + edx + 0xd9d4d039]
        mov     eax, edx
        shr     eax, 0x1c
        shl     edx, 4
        or      eax, edx
        mov     edx, ebx
        add     eax, ecx
        xor     edx, ecx
        xor     edx, eax
        add     edx, dword ptr [esp + 0x40]
        lea     edi, [edi + edx + 0xe6db99e5]
        mov     edx, edi
        shr     edx, 0x15
        shl     edi, 0xb
        or      edx, edi
        add     edx, eax
        mov     edi, edx
        xor     edi, ecx
        xor     edi, eax
        add     edi, dword ptr [esp + 0x4c]
        lea     ebx, [ebx + edi + 0x1fa27cf8]
        mov     edi, ebx
        shr     edi, 0x10
        shl     ebx, 0x10
        or      edi, ebx
        mov     ebx, edx
        add     edi, edx
        xor     ebx, edi
        xor     ebx, eax
        add     ebx, dword ptr [esp + 0x18]
        lea     ecx, [ecx + ebx + 0xc4ac5665]
        mov     ebx, ecx
        shl     ebx, 0x17
        shr     ecx, 9
        or      ebx, ecx
        mov     ecx, edx
        add     ebx, edi
        not     ecx
        or      ecx, ebx
        xor     ecx, edi
        add     ecx, dword ptr [esp + 0x10]
        lea     eax, [eax + ecx + 0xf4292244]
        mov     ecx, eax
        shr     ecx, 0x1a
        shl     eax, 6
        or      ecx, eax
        mov     eax, edi
        add     ecx, ebx
        not     eax
        or      eax, ecx
        xor     eax, ebx
        add     eax, dword ptr [esp + 0x2c]
        lea     edx, [edx + eax + 0x432aff97]
        mov     eax, edx
        shr     eax, 0x16
        shl     edx, 0xa
        or      eax, edx
        mov     edx, ebx
        add     eax, ecx
        not     edx
        or      edx, eax
        xor     edx, ecx
        add     edx, dword ptr [esp + 0x48]
        lea     edi, [edi + edx + 0xab9423a7]
        mov     edx, edi
        shr     edx, 0x11
        shl     edi, 0xf
        or      edx, edi
        mov     edi, ecx
        add     edx, eax
        not     edi
        or      edi, edx
        xor     edi, eax
        add     edi, dword ptr [esp + 0x24]
        lea     ebx, [ebx + edi + 0xfc93a039]
        mov     edi, ebx
        shl     edi, 0x15
        shr     ebx, 0xb
        or      edi, ebx
        mov     ebx, eax
        add     edi, edx
        not     ebx
        or      ebx, edi
        xor     ebx, edx
        add     ebx, dword ptr [esp + 0x40]
        lea     ecx, [ecx + ebx + 0x655b59c3]
        mov     ebx, ecx
        shr     ebx, 0x1a
        shl     ecx, 6
        or      ebx, ecx
        mov     ecx, edx
        add     ebx, edi
        not     ecx
        or      ecx, ebx
        xor     ecx, edi
        add     ecx, dword ptr [esp + 0x1c]
        lea     eax, [eax + ecx + 0x8f0ccc92]
        mov     ecx, eax
        shr     ecx, 0x16
        shl     eax, 0xa
        or      ecx, eax
        mov     eax, edi
        add     ecx, ebx
        not     eax
        or      eax, ecx
        xor     eax, ebx
        add     eax, dword ptr [esp + 0x38]
        lea     edx, [edx + eax + 0xffeff47d]
        mov     eax, edx
        shr     eax, 0x11
        shl     edx, 0xf
        or      eax, edx
        mov     edx, ebx
        add     eax, ecx
        not     edx
        or      edx, eax
        xor     edx, ecx
        add     edx, dword ptr [esp + 0x14]
        lea     edi, [edi + edx + 0x85845dd1]
        mov     edx, edi
        shl     edx, 0x15
        shr     edi, 0xb
        or      edx, edi
        mov     edi, ecx
        add     edx, eax
        not     edi
        or      edi, edx
        xor     edi, eax
        add     edi, dword ptr [esp + 0x30]
        lea     ebx, [ebx + edi + 0x6fa87e4f]
        mov     edi, ebx
        shr     edi, 0x1a
        shl     ebx, 6
        or      edi, ebx
        mov     ebx, eax
        add     edi, edx
        not     ebx
        or      ebx, edi
        xor     ebx, edx
        add     ebx, dword ptr [esp + 0x4c]
        lea     ecx, [ecx + ebx + 0xfe2ce6e0]
        mov     ebx, ecx
        shr     ebx, 0x16
        shl     ecx, 0xa
        or      ebx, ecx
        mov     ecx, edx
        add     ebx, edi
        not     ecx
        or      ecx, ebx
        xor     ecx, edi
        add     ecx, dword ptr [esp + 0x28]
        lea     eax, [eax + ecx + 0xa3014314]
        mov     ecx, eax
        shr     ecx, 0x11
        shl     eax, 0xf
        or      ecx, eax
        mov     eax, edi
        add     ecx, ebx
        not     eax
        or      eax, ecx
        xor     eax, ebx
        add     eax, dword ptr [esp + 0x44]
        lea     edx, [edx + eax + 0x4e0811a1]
        mov     eax, edx
        shl     eax, 0x15
        shr     edx, 0xb
        or      eax, edx
        mov     edx, ebx
        add     eax, ecx
        not     edx
        or      edx, eax
        xor     edx, ecx
        add     edx, dword ptr [esp + 0x20]
        lea     edi, [edi + edx + 0xf7537e82]
        mov     edx, edi
        shr     edx, 0x1a
        shl     edi, 6
        or      edx, edi
        mov     edi, ecx
        add     edx, eax
        not     edi
        or      edi, edx
        xor     edi, eax
        add     edi, dword ptr [esp + 0x3c]
        lea     ebx, [ebx + edi + 0xbd3af235]
        mov     edi, ebx
        shr     edi, 0x16
        shl     ebx, 0xa
        or      edi, ebx
        mov     ebx, eax
        add     edi, edx
        not     ebx
        or      ebx, edi
        xor     ebx, edx
        add     ebx, dword ptr [esp + 0x18]
        lea     ecx, [ecx + ebx + 0x2ad7d2bb]
        mov     ebx, ecx
        shr     ebx, 0x11
        shl     ecx, 0xf
        or      ebx, ecx
        mov     ecx, edx
        add     ebx, edi
        not     ecx
        or      ecx, ebx
        xor     ecx, edi
        add     ecx, ebp
        mov     ebp, dword ptr [esi]
        add     ebp, edx
        lea     eax, [eax + ecx + 0xeb86d391]
        mov     ecx, dword ptr [esi + 0x8]
        mov     edx, eax
        mov     dword ptr [esi], ebp
        mov     ebp, dword ptr [esi + 0x4]
        add     ecx, ebx
        shl     edx, 0x15
        shr     eax, 0xb
        or      edx, eax
        mov     eax, dword ptr [esi + 0xc]
        add     edx, ebx
        mov     dword ptr [esi + 0x8], ecx
        add     ebp, edx
        add     eax, edi
        mov     dword ptr [esi + 0x4], ebp
        mov     dword ptr [esi + 0xc], eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret     0x8
    }
}
