/*
 * FUN_006B3D60 (320 B) — __cdecl, RET.
 *
 * NOTE: the assigned block (0x6B3D55, 1041 B) contains FOUR functions; this
 * file transcribes the first (0x6B3D60..0x6B3E9F). The other three
 * (0x6B3EA0, 0x6B3FE0, 0x6B4000) are reported as adjacent discoveries.
 *
 * GOS text/UI helper: calls FUN_0041eb40 (thiscall on edi) and FUN_006b36f0,
 * then does obfuscated pointer arithmetic through g_7dab44/g_7dab40 (xor
 * 0x85739531) to update a table entry (esi index), and issues a series of
 * FUN_006b3a60 calls with +/-3 coordinate offsets.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_7dab44;   /* DAT_007dab44 */
extern int  g_7dab40;   /* DAT_007dab40 */
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_006b36f0(void);
extern void __cdecl FUN_006b3a60(void);

__declspec(naked) void FUN_006B3D60(void)
{
    __asm {
        sub     esp, 8
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        push    0xb
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0
        call    FUN_0041eb40
        mov     eax, dword ptr [esp + 0xc]
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0xc]
        push    edx
        push    eax
        call    FUN_006b36f0
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     eax, dword ptr [edx + 0x14]
        mov     esi, dword ptr [esp + 0x34]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x1814]
        mov     edx, dword ptr [eax + esi*4 + 0x9098]
        add     eax, 0x9090
        add     edx, 0xb
        mov     dword ptr [eax + esi*4 + 8], edx
        mov     ecx, dword ptr [eax + 0xc00]
        add     ecx, 0xb
        push    0
        mov     dword ptr [eax + 0xc00], ecx
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x18]
        push    esi
        push    edi
        add     ecx, 3
        push    ecx
        add     edx, 3
        push    edx
        call    FUN_006b3a60
        mov     eax, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x28]
        push    0
        push    esi
        push    edi
        push    eax
        add     ecx, 3
        push    ecx
        call    FUN_006b3a60
        mov     edx, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0x3c]
        push    0
        push    esi
        push    edi
        add     edx, -3
        push    edx
        add     eax, 3
        push    eax
        call    FUN_006b3a60
        mov     ecx, dword ptr [esp + 0x60]
        mov     edx, dword ptr [esp + 0x50]
        add     esp, 0x48
        push    0
        push    esi
        push    edi
        add     ecx, 3
        push    ecx
        push    edx
        call    FUN_006b3a60
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x1c]
        push    0
        push    esi
        push    edi
        add     eax, -3
        push    eax
        push    ecx
        call    FUN_006b3a60
        push    0
        push    esi
        mov     edx, dword ptr [esp + 0x48]
        mov     eax, dword ptr [esp + 0x38]
        push    edi
        add     edx, 3
        push    edx
        add     eax, -3
        push    eax
        call    FUN_006b3a60
        mov     ecx, dword ptr [esp + 0x54]
        mov     edx, dword ptr [esp + 0x44]
        push    0
        push    esi
        push    edi
        push    ecx
        add     edx, -3
        push    edx
        call    FUN_006b3a60
        mov     eax, dword ptr [esp + 0x68]
        mov     ecx, dword ptr [esp + 0x58]
        add     esp, 0x50
        push    0
        push    esi
        push    edi
        add     eax, -3
        push    eax
        add     ecx, -3
        push    ecx
        call    FUN_006b3a60
        add     esp, 0x14
        pop     edi
        pop     esi
        add     esp, 8
        ret
    }
}
