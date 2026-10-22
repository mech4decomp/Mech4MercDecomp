/*
 * FUN_0070E4D0 (2247 B) — MD5 compression function (state update + finalize).
 *
 * __stdcall, RET 8. param_1 = pointer to 4-dword MD5 state, param_2 = data.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0070edf0(void);
extern void __cdecl FUN_0070ee70(void);

__declspec(naked) void __stdcall FUN_0070e4d0(void)
{
    __asm {
        sub     esp, 0x40
        mov     eax, dword ptr [esp + 0x48]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x54]
        mov     esi, dword ptr [edi + 0x4]
        mov     ebx, dword ptr [edi + 0x8]
        mov     ebp, dword ptr [edi + 0xc]
        push    0x40
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        call    FUN_0070edf0
        mov     edi, dword ptr [edi]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, esi
        not     edx
        and     edx, ebp
        mov     eax, ebx
        and     eax, esi
        or      edx, eax
        add     edx, edi
        lea     ecx, [edx + ecx*1 + 0xd76aa478]
        mov     eax, ecx
        shl     ecx, 0x7
        shr     eax, 0x19
        or      eax, ecx
        add     eax, esi
        mov     ecx, esi
        and     ecx, eax
        mov     edx, eax
        not     edx
        and     edx, ebx
        or      edx, ecx
        add     edx, dword ptr [esp + 0x14]
        lea     edx, [edx + ebp*1 + 0xe8c7b756]
        mov     ebp, dword ptr [esp + 0x18]
        mov     ecx, edx
        shl     edx, 0xc
        shr     ecx, 0x14
        or      ecx, edx
        add     ecx, eax
        mov     edx, ecx
        not     edx
        and     edx, esi
        mov     edi, ecx
        and     edi, eax
        or      edx, edi
        add     edx, ebp
        mov     ebp, dword ptr [esp + 0x1c]
        lea     edi, [ebx + edx*1 + 0x242070db]
        mov     edx, edi
        shl     edi, 0x11
        shr     edx, 0xf
        or      edx, edi
        add     edx, ecx
        mov     edi, edx
        not     edi
        and     edi, eax
        mov     ebx, ecx
        and     ebx, edx
        or      edi, ebx
        add     edi, ebp
        mov     ebp, dword ptr [esp + 0x20]
        lea     edi, [esi + edi*1 + 0xc1bdceee]
        mov     esi, edi
        shr     edi, 0xa
        shl     esi, 0x16
        or      esi, edi
        add     esi, edx
        mov     edi, esi
        not     edi
        and     edi, ecx
        mov     ebx, edx
        and     ebx, esi
        or      edi, ebx
        add     edi, ebp
        lea     edi, [eax + edi*1 + 0xf57c0faf]
        mov     eax, edi
        shl     edi, 0x7
        mov     ebp, dword ptr [esp + 0x24]
        shr     eax, 0x19
        or      eax, edi
        add     eax, esi
        mov     edi, eax
        not     edi
        and     edi, edx
        mov     ebx, esi
        and     ebx, eax
        or      edi, ebx
        add     edi, ebp
        lea     edi, [ecx + edi*1 + 0x4787c62a]
        mov     ecx, edi
        shl     edi, 0xc
        mov     ebp, dword ptr [esp + 0x28]
        shr     ecx, 0x14
        or      ecx, edi
        add     ecx, eax
        mov     edi, ecx
        not     edi
        and     edi, esi
        mov     ebx, ecx
        and     ebx, eax
        or      edi, ebx
        add     edi, ebp
        lea     edi, [edx + edi*1 + 0xa8304613]
        mov     edx, edi
        shl     edi, 0x11
        mov     ebp, dword ptr [esp + 0x2c]
        shr     edx, 0xf
        or      edx, edi
        add     edx, ecx
        mov     ebx, ecx
        and     ebx, edx
        mov     edi, edx
        not     edi
        and     edi, eax
        or      edi, ebx
        add     edi, ebp
        lea     edi, [esi + edi*1 + 0xfd469501]
        mov     esi, edi
        mov     ebp, dword ptr [esp + 0x30]
        shr     edi, 0xa
        shl     esi, 0x16
        or      esi, edi
        add     esi, edx
        mov     edi, esi
        not     edi
        and     edi, ecx
        mov     ebx, edx
        and     ebx, esi
        or      edi, ebx
        add     edi, ebp
        mov     ebp, dword ptr [esp + 0x34]
        lea     edi, [eax + edi*1 + 0x698098d8]
        mov     eax, edi
        shl     edi, 0x7
        shr     eax, 0x19
        or      eax, edi
        add     eax, esi
        mov     edi, eax
        not     edi
        and     edi, edx
        mov     ebx, esi
        and     ebx, eax
        or      edi, ebx
        add     edi, ebp
        mov     ebp, dword ptr [esp + 0x38]
        lea     edi, [ecx + edi*1 + 0x8b44f7af]
        mov     ecx, edi
        shl     edi, 0xc
        shr     ecx, 0x14
        or      ecx, edi
        add     ecx, eax
        mov     edi, ecx
        not     edi
        mov     ebx, ecx
        and     edi, esi
        and     ebx, eax
        or      edi, ebx
        add     edi, ebp
        lea     edi, [edx + edi*1 + 0xffff5bb1]
        mov     edx, edi
        shl     edi, 0x11
        mov     ebp, dword ptr [esp + 0x3c]
        shr     edx, 0xf
        or      edx, edi
        add     edx, ecx
        mov     edi, edx
        not     edi
        and     edi, eax
        mov     ebx, ecx
        and     ebx, edx
        or      edi, ebx
        add     edi, ebp
        lea     edi, [esi + edi*1 + 0x895cd7be]
        mov     esi, edi
        shr     edi, 0xa
        mov     ebp, dword ptr [esp + 0x40]
        shl     esi, 0x16
        or      esi, edi
        add     esi, edx
        mov     ebx, edx
        and     ebx, esi
        mov     edi, esi
        not     edi
        and     edi, ecx
        or      edi, ebx
        add     edi, ebp
        lea     edi, [eax + edi*1 + 0x6b901122]
        mov     eax, edi
        shl     edi, 0x7
        shr     eax, 0x19
        or      eax, edi
        add     eax, esi
        mov     ebx, esi
        mov     edi, eax
        not     edi
        and     edi, edx
        and     ebx, eax
        or      edi, ebx
        add     edi, dword ptr [esp + 0x44]
        lea     edi, [ecx + edi*1 + 0xfd987193]
        mov     ecx, edi
        shl     edi, 0xc
        shr     ecx, 0x14
        or      ecx, edi
        add     ecx, eax
        mov     ebp, esi
        mov     ebx, ecx
        not     ebx
        and     ebp, ebx
        mov     edi, ecx
        and     edi, eax
        or      edi, ebp
        add     edi, dword ptr [esp + 0x48]
        lea     edx, [edx + edi*1 + 0xa679438e]
        mov     edi, edx
        shl     edx, 0x11
        shr     edi, 0xf
        or      edi, edx
        add     edi, ecx
        mov     edx, edi
        not     edx
        mov     dword ptr [esp + 0x58], edx
        and     edx, eax
        mov     ebp, ecx
        and     ebp, edi
        or      edx, ebp
        add     edx, dword ptr [esp + 0x4c]
        lea     esi, [esi + edx*1 + 0x49b40821]
        mov     edx, esi
        shl     edx, 0x16
        shr     esi, 0xa
        or      edx, esi
        add     edx, edi
        mov     esi, ecx
        and     esi, edx
        mov     ebp, edi
        and     ebp, ebx
        or      esi, ebp
        add     esi, dword ptr [esp + 0x14]
        lea     eax, [eax + esi*1 + 0xf61e2562]
        mov     ebp, dword ptr [esp + 0x28]
        mov     esi, eax
        shr     esi, 0x1b
        shl     eax, 0x5
        or      esi, eax
        mov     eax, dword ptr [esp + 0x58]
        add     esi, edx
        and     eax, edx
        mov     ebx, edi
        and     ebx, esi
        or      eax, ebx
        add     eax, ebp
        mov     ebp, dword ptr [esp + 0x3c]
        lea     ecx, [ecx + eax*1 + 0xc040b340]
        mov     eax, ecx
        shl     ecx, 0x9
        shr     eax, 0x17
        or      eax, ecx
        add     eax, esi
        mov     ecx, edx
        not     ecx
        and     ecx, esi
        mov     ebx, eax
        and     ebx, edx
        or      ecx, ebx
        add     ecx, ebp
        mov     ebp, dword ptr [esp + 0x10]
        lea     edi, [edi + ecx*1 + 0x265e5a51]
        mov     ecx, edi
        shl     edi, 0xe
        shr     ecx, 0x12
        or      ecx, edi
        mov     edi, esi
        add     ecx, eax
        not     edi
        and     edi, eax
        mov     ebx, ecx
        and     ebx, esi
        or      edi, ebx
        add     edi, ebp
        lea     edx, [edx + edi*1 + 0xe9b6c7aa]
        mov     edi, edx
        shr     edx, 0xc
        shl     edi, 0x14
        or      edi, edx
        mov     edx, eax
        not     edx
        add     edi, ecx
        and     edx, ecx
        mov     ebx, eax
        and     ebx, edi
        or      edx, ebx
        add     edx, dword ptr [esp + 0x24]
        lea     esi, [esi + edx*1 + 0xd62f105d]
        mov     edx, esi
        shl     esi, 0x5
        shr     edx, 0x1b
        or      edx, esi
        mov     esi, ecx
        not     esi
        and     esi, edi
        add     edx, edi
        mov     ebx, ecx
        and     ebx, edx
        or      esi, ebx
        add     esi, dword ptr [esp + 0x38]
        lea     esi, [eax + esi*1 + 0x2441453]
        mov     eax, esi
        shl     esi, 0x9
        shr     eax, 0x17
        or      eax, esi
        add     eax, edx
        mov     esi, edi
        not     esi
        and     esi, edx
        mov     ebx, eax
        and     ebx, edi
        or      esi, ebx
        add     esi, dword ptr [esp + 0x4c]
        lea     esi, [ecx + esi*1 + 0xd8a1e681]
        mov     ecx, esi
        shl     esi, 0xe
        shr     ecx, 0x12
        or      ecx, esi
        add     ecx, eax
        mov     esi, edx
        not     esi
        and     esi, eax
        mov     ebx, ecx
        and     ebx, edx
        or      esi, ebx
        add     esi, dword ptr [esp + 0x20]
        lea     edi, [edi + esi*1 + 0xe7d3fbc8]
        mov     esi, edi
        shr     edi, 0xc
        shl     esi, 0x14
        or      esi, edi
        add     esi, ecx
        mov     edi, eax
        not     edi
        and     edi, ecx
        mov     ebx, eax
        and     ebx, esi
        or      edi, ebx
        add     edi, dword ptr [esp + 0x34]
        lea     edi, [edx + edi*1 + 0x21e1cde6]
        mov     edx, edi
        shl     edi, 0x5
        shr     edx, 0x1b
        or      edx, edi
        add     edx, esi
        mov     edi, ecx
        not     edi
        and     edi, esi
        mov     ebx, ecx
        and     ebx, edx
        or      edi, ebx
        add     edi, dword ptr [esp + 0x48]
        lea     edi, [eax + edi*1 + 0xc33707d6]
        mov     eax, edi
        shl     edi, 0x9
        shr     eax, 0x17
        or      eax, edi
        add     eax, edx
        mov     edi, esi
        not     edi
        and     edi, edx
        mov     ebx, eax
        and     ebx, esi
        or      edi, ebx
        add     edi, dword ptr [esp + 0x1c]
        lea     edi, [ecx + edi*1 + 0xf4d50d87]
        mov     ecx, edi
        shl     edi, 0xe
        shr     ecx, 0x12
        or      ecx, edi
        add     ecx, eax
        mov     edi, edx
        not     edi
        and     edi, eax
        mov     ebx, ecx
        and     ebx, edx
        or      edi, ebx
        add     edi, dword ptr [esp + 0x30]
        lea     edi, [esi + edi*1 + 0x455a14ed]
        mov     esi, edi
        shl     esi, 0x14
        shr     edi, 0xc
        or      esi, edi
        add     esi, ecx
        mov     edi, eax
        not     edi
        and     edi, ecx
        mov     ebx, eax
        and     ebx, esi
        or      edi, ebx
        add     edi, dword ptr [esp + 0x44]
        lea     edi, [edx + edi*1 + 0xa9e3e905]
        mov     edx, edi
        shl     edi, 0x5
        shr     edx, 0x1b
        or      edx, edi
        add     edx, esi
        mov     edi, ecx
        not     edi
        and     edi, esi
        mov     ebx, ecx
        and     ebx, edx
        or      edi, ebx
        add     edi, dword ptr [esp + 0x18]
        lea     edi, [eax + edi*1 + 0xfcefa3f8]
        mov     eax, edi
        shl     edi, 0x9
        shr     eax, 0x17
        or      eax, edi
        add     eax, edx
        mov     edi, esi
        not     edi
        and     edi, edx
        mov     ebx, eax
        and     ebx, esi
        or      edi, ebx
        add     edi, dword ptr [esp + 0x2c]
        lea     edi, [ecx + edi*1 + 0x676f02d9]
        mov     ecx, edi
        shl     edi, 0xe
        shr     ecx, 0x12
        or      ecx, edi
        add     ecx, eax
        mov     edi, edx
        not     edi
        and     edi, eax
        mov     ebx, ecx
        and     ebx, edx
        or      edi, ebx
        add     edi, dword ptr [esp + 0x40]
        mov     ebx, dword ptr [esp + 0x24]
        lea     edi, [esi + edi*1 + 0x8d2a4c8a]
        mov     esi, edi
        shr     edi, 0xc
        shl     esi, 0x14
        or      esi, edi
        mov     edi, eax
        xor     edi, ecx
        add     esi, ecx
        xor     edi, esi
        add     edi, ebx
        mov     ebx, dword ptr [esp + 0x30]
        lea     edi, [edx + edi*1 + 0xfffa3942]
        mov     edx, edi
        shl     edi, 0x4
        shr     edx, 0x1c
        or      edx, edi
        mov     edi, ecx
        xor     edi, esi
        add     edx, esi
        xor     edi, edx
        add     edi, ebx
        lea     eax, [eax + edi*1 + 0x8771f681]
        mov     edi, eax
        shl     eax, 0xb
        shr     edi, 0x15
        or      edi, eax
        add     edi, edx
        mov     eax, edi
        mov     ebx, dword ptr [esp + 0x3c]
        xor     eax, esi
        xor     eax, edx
        add     eax, ebx
        lea     ecx, [ecx + eax*1 + 0x6d9d6122]
        mov     ebx, ecx
        shl     ecx, 0x10
        shr     ebx, 0x10
        or      ebx, ecx
        add     ebx, edi
        mov     ecx, edi
        xor     ecx, ebx
        mov     eax, ecx
        xor     eax, edx
        add     eax, dword ptr [esp + 0x48]
        lea     esi, [esi + eax*1 + 0xfde5380c]
        mov     eax, esi
        shr     esi, 0x9
        shl     eax, 0x17
        or      eax, esi
        mov     esi, dword ptr [esp + 0x14]
        add     eax, ebx
        xor     ecx, eax
        add     ecx, esi
        mov     esi, dword ptr [esp + 0x20]
        lea     edx, [edx + ecx*1 + 0xa4beea44]
        mov     ecx, edx
        shl     edx, 0x4
        shr     ecx, 0x1c
        or      ecx, edx
        add     ecx, eax
        mov     edx, ebx
        xor     edx, eax
        xor     edx, ecx
        add     edx, esi
        lea     edi, [edi + edx*1 + 0x4bdecfa9]
        mov     edx, edi
        shl     edi, 0xb
        shr     edx, 0x15
        or      edx, edi
        mov     edi, dword ptr [esp + 0x2c]
        add     edx, ecx
        mov     esi, edx
        xor     esi, eax
        xor     esi, ecx
        add     esi, edi
        lea     ebx, [ebx + esi*1 + 0xf6bb4b60]
        mov     esi, ebx
        shl     ebx, 0x10
        shr     esi, 0x10
        or      esi, ebx
        add     esi, edx
        mov     edi, edx
        xor     edi, esi
        mov     ebx, edi
        xor     ebx, ecx
        add     ebx, dword ptr [esp + 0x38]
        lea     ebx, [eax + ebx*1 + 0xbebfbc70]
        mov     eax, ebx
        shl     eax, 0x17
        shr     ebx, 0x9
        or      eax, ebx
        mov     ebx, dword ptr [esp + 0x44]
        add     eax, esi
        xor     edi, eax
        add     edi, ebx
        lea     edi, [ecx + edi*1 + 0x289b7ec6]
        mov     ecx, edi
        shl     edi, 0x4
        shr     ecx, 0x1c
        or      ecx, edi
        mov     edi, esi
        xor     edi, eax
        add     ecx, eax
        xor     edi, ecx
        add     edi, ebp
        lea     edi, [edx + edi*1 + 0xeaa127fa]
        mov     edx, edi
        shr     edx, 0x15
        shl     edi, 0xb
        or      edx, edi
        mov     ebx, dword ptr [esp + 0x1c]
        add     edx, ecx
        mov     edi, edx
        xor     edi, eax
        xor     edi, ecx
        add     edi, ebx
        lea     edi, [esi + edi*1 + 0xd4ef3085]
        mov     esi, edi
        shl     edi, 0x10
        shr     esi, 0x10
        or      esi, edi
        add     esi, edx
        mov     edi, edx
        xor     edi, esi
        mov     ebx, edi
        xor     ebx, ecx
        add     ebx, dword ptr [esp + 0x28]
        lea     ebx, [eax + ebx*1 + 0x4881d05]
        mov     eax, ebx
        shl     eax, 0x17
        shr     ebx, 0x9
        or      eax, ebx
        mov     ebx, dword ptr [esp + 0x34]
        add     eax, esi
        xor     edi, eax
        add     edi, ebx
        lea     edi, [ecx + edi*1 + 0xd9d4d039]
        mov     ecx, edi
        shl     edi, 0x4
        mov     ebx, dword ptr [esp + 0x40]
        shr     ecx, 0x1c
        or      ecx, edi
        add     ecx, eax
        mov     edi, esi
        xor     edi, eax
        xor     edi, ecx
        add     edi, ebx
        lea     edi, [edx + edi*1 + 0xe6db99e5]
        mov     edx, edi
        shl     edi, 0xb
        mov     ebx, dword ptr [esp + 0x4c]
        shr     edx, 0x15
        or      edx, edi
        add     edx, ecx
        mov     edi, edx
        xor     edi, eax
        xor     edi, ecx
        add     edi, ebx
        lea     edi, [esi + edi*1 + 0x1fa27cf8]
        mov     ebx, dword ptr [esp + 0x18]
        mov     esi, edi
        shl     edi, 0x10
        shr     esi, 0x10
        or      esi, edi
        add     esi, edx
        mov     edi, edx
        xor     edi, esi
        xor     edi, ecx
        add     edi, ebx
        lea     edi, [eax + edi*1 + 0xc4ac5665]
        mov     eax, edi
        shr     edi, 0x9
        shl     eax, 0x17
        or      eax, edi
        add     eax, esi
        mov     edi, edx
        not     edi
        or      edi, eax
        xor     edi, esi
        add     edi, ebp
        mov     ebp, dword ptr [esp + 0x2c]
        lea     edi, [ecx + edi*1 + 0xf4292244]
        mov     ecx, edi
        shl     edi, 0x6
        shr     ecx, 0x1a
        or      ecx, edi
        mov     edi, esi
        add     ecx, eax
        not     edi
        or      edi, ecx
        xor     edi, eax
        add     edi, ebp
        lea     edi, [edx + edi*1 + 0x432aff97]
        mov     edx, edi
        shl     edi, 0xa
        mov     ebp, dword ptr [esp + 0x48]
        shr     edx, 0x16
        or      edx, edi
        add     edx, ecx
        mov     edi, eax
        not     edi
        or      edi, edx
        xor     edi, ecx
        add     edi, ebp
        lea     edi, [esi + edi*1 + 0xab9423a7]
        mov     esi, edi
        shl     edi, 0xf
        mov     ebp, dword ptr [esp + 0x24]
        shr     esi, 0x11
        or      esi, edi
        add     esi, edx
        mov     edi, ecx
        not     edi
        or      edi, esi
        xor     edi, edx
        add     edi, ebp
        lea     edi, [eax + edi*1 + 0xfc93a039]
        mov     eax, edi
        shr     edi, 0xb
        mov     ebp, dword ptr [esp + 0x40]
        shl     eax, 0x15
        or      eax, edi
        add     eax, esi
        mov     edi, edx
        not     edi
        or      edi, eax
        xor     edi, esi
        add     edi, ebp
        lea     edi, [ecx + edi*1 + 0x655b59c3]
        mov     ecx, edi
        shl     edi, 0x6
        mov     ebp, dword ptr [esp + 0x1c]
        shr     ecx, 0x1a
        or      ecx, edi
        add     ecx, eax
        mov     edi, esi
        not     edi
        or      edi, ecx
        xor     edi, eax
        add     edi, ebp
        lea     edi, [edx + edi*1 + 0x8f0ccc92]
        mov     ebp, dword ptr [esp + 0x38]
        mov     edx, edi
        shl     edi, 0xa
        shr     edx, 0x16
        or      edx, edi
        mov     edi, eax
        not     edi
        add     edx, ecx
        or      edi, edx
        xor     edi, ecx
        add     edi, ebp
        mov     ebp, dword ptr [esp + 0x14]
        lea     edi, [esi + edi*1 + 0xffeff47d]
        mov     esi, edi
        shl     edi, 0xf
        shr     esi, 0x11
        or      esi, edi
        mov     edi, ecx
        not     edi
        add     esi, edx
        or      edi, esi
        xor     edi, edx
        add     edi, ebp
        lea     edi, [eax + edi*1 + 0x85845dd1]
        mov     eax, edi
        shr     edi, 0xb
        shl     eax, 0x15
        or      eax, edi
        mov     edi, edx
        add     eax, esi
        not     edi
        or      edi, eax
        xor     edi, esi
        add     edi, dword ptr [esp + 0x30]
        lea     edi, [ecx + edi*1 + 0x6fa87e4f]
        mov     ecx, edi
        shl     edi, 0x6
        mov     ebp, dword ptr [esp + 0x4c]
        shr     ecx, 0x1a
        or      ecx, edi
        add     ecx, eax
        mov     edi, esi
        not     edi
        or      edi, ecx
        xor     edi, eax
        add     edi, ebp
        lea     edi, [edx + edi*1 + 0xfe2ce6e0]
        mov     edx, edi
        shl     edi, 0xa
        mov     ebp, dword ptr [esp + 0x28]
        shr     edx, 0x16
        or      edx, edi
        add     edx, ecx
        mov     edi, eax
        not     edi
        or      edi, edx
        xor     edi, ecx
        add     edi, ebp
        lea     edi, [esi + edi*1 + 0xa3014314]
        mov     esi, edi
        shl     edi, 0xf
        mov     ebp, dword ptr [esp + 0x44]
        shr     esi, 0x11
        or      esi, edi
        add     esi, edx
        mov     edi, ecx
        not     edi
        or      edi, esi
        xor     edi, edx
        add     edi, ebp
        lea     edi, [eax + edi*1 + 0x4e0811a1]
        mov     eax, edi
        mov     ebp, dword ptr [esp + 0x20]
        shr     edi, 0xb
        shl     eax, 0x15
        or      eax, edi
        add     eax, esi
        mov     edi, edx
        not     edi
        or      edi, eax
        xor     edi, esi
        add     edi, ebp
        mov     ebp, dword ptr [esp + 0x3c]
        lea     edi, [ecx + edi*1 + 0xf7537e82]
        mov     ecx, edi
        shl     edi, 0x6
        shr     ecx, 0x1a
        or      ecx, edi
        mov     edi, esi
        not     edi
        add     ecx, eax
        or      edi, ecx
        xor     edi, eax
        add     edi, ebp
        lea     edi, [edx + edi*1 + 0xbd3af235]
        mov     edx, edi
        shl     edi, 0xa
        shr     edx, 0x16
        or      edx, edi
        mov     edi, eax
        not     edi
        add     edx, ecx
        or      edi, edx
        xor     edi, ecx
        add     edi, ebx
        lea     edi, [esi + edi*1 + 0x2ad7d2bb]
        mov     esi, edi
        shr     esi, 0x11
        shl     edi, 0xf
        or      esi, edi
        add     esi, edx
        mov     ebx, dword ptr [esp + 0x34]
        mov     edi, ecx
        not     edi
        or      edi, esi
        xor     edi, edx
        add     edi, ebx
        lea     edi, [eax + edi*1 + 0xeb86d391]
        mov     eax, dword ptr [esp + 0x54]
        mov     ebx, dword ptr [eax]
        add     ebx, ecx
        mov     ecx, edi
        shl     ecx, 0x15
        shr     edi, 0xb
        or      ecx, edi
        mov     dword ptr [eax], ebx
        add     ecx, dword ptr [eax + 0x4]
        add     ecx, esi
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, dword ptr [eax + 0x8]
        add     ecx, esi
        mov     dword ptr [eax + 0x8], ecx
        mov     ecx, dword ptr [eax + 0xc]
        push    0x40
        add     ecx, edx
        push    0x0
        lea     edx, [esp + 0x18]
        push    edx
        mov     dword ptr [eax + 0xc], ecx
        call    FUN_0070ee70
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret     0x8
    }
}
