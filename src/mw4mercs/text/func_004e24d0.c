/*
 * FUN_004e24d0 (271 B) — MLR/Adept: add object to a zone/location.
 * __thiscall (ECX = this). Validates entity + child element, computes a
 * zone index via FUN_004e27b0, asserts on failure, then registers the
 * object (FUN_004179b0) and dispatches a virtual call.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fab90(void);
extern void __cdecl FUN_004e27b0(void);
extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_004e24d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        mov     eax, dword ptr [ebp + 0x8]
        test    eax, eax
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [eax + 0xd8]
        mov     ebx, ecx
        jnz     loc_4e24fa
        push    0x773e28
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      loc_4e24fa
        int     3
loc_4e24fa:
        test    edi, edi
        jnz     loc_4e2510
        push    0x773dfc
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      loc_4e2510
        int     3
loc_4e2510:
        mov     eax, dword ptr [edi + 0x2c]
        mov     dword ptr [ebp - 0x10], eax
        mov     ecx, dword ptr [edi + 0x3c]
        mov     dword ptr [ebp - 0xc], ecx
        mov     edx, dword ptr [edi + 0x4c]
        lea     eax, [ebp - 0x10]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x8], edx
        call    FUN_004e27b0
        mov     esi, eax
        mov     eax, dword ptr [ebx + 0x17c]
        mov     ecx, esi
        shl     ecx, 0x5
        add     ecx, esi
        lea     edx, [esi + ecx*0x4]
        lea     eax, [eax + edx*0x4]
        test    eax, eax
        mov     dword ptr [ebp - 0x4], eax
        jnz     loc_4e2578
        fld     dword ptr [ebp - 0x8]
        push    esi
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [ebp - 0xc]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [ebp - 0x10]
        fstp    qword ptr [esp]
        push    0x773dc4
        call    FUN_006fab90
        add     esp, 0x20
        test    eax, eax
        jz      loc_4e2578
        int     3
loc_4e2578:
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0x168]
        cmp     esi, ecx
        jc      loc_4e25b4
        fld     dword ptr [ebp - 0x8]
        push    esi
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [ebp - 0xc]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [ebp - 0x10]
        fstp    qword ptr [esp]
        push    0x773dc4
        call    FUN_006fab90
        add     esp, 0x20
        test    eax, eax
        jz      loc_4e25b4
        int     3
loc_4e25b4:
        mov     esi, dword ptr [ebp + 0x8]
        push    esi
        lea     ecx, [ebx + 0xbc]
        mov     dword ptr [esi + 0xc4], ebx
        call    FUN_004179b0
        or      dword ptr [esi + 0x10], 0x20
        mov     ecx, dword ptr [ebp - 0x4]
        mov     edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 0x8]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
