/*
 * FUN_00695BE0 (480 B true extent; block 663 B) — __thiscall (RET 0xC).
 * Logging helper: formats three floats from the arg struct into strings
 * (via sprintf-style 0x76b420) and passes them to the log API.
 *
 * NOTE: the 663-byte data block also contains an adjacent function
 * FUN_00695DC0 (0x695DC0) which is NOT in this assigned list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00696B20(void);
extern void __cdecl FUN_005CB1C0(void);
extern void __cdecl FUN_00563480(void);
extern void __cdecl FUN_005DDA40(void);
extern void __cdecl FUN_005CBE50(void);
extern void __cdecl FUN_005CB3D0(void);
extern void __cdecl FUN_005CBD00(void);
extern void __cdecl FUN_005DDBE0(void);
extern void __cdecl FUN_00695A20(void);
extern unsigned int g_0076B420;

__declspec(naked) void FUN_00695BE0(void)
{
    __asm {
        sub     esp, 0x44
        push    ebp
        mov     ebp, ecx
        call    FUN_00696B20
        test    al, al
        je      L695DB7
        push    ebx
        push    esi
        push    edi
        lea     eax, [esp + 0x13]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_005CB1C0
        mov     ecx, dword ptr [esp + 0x5c]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77e7dc
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x77e7dc
        push    ecx
        push    0x77e7dc
        lea     ecx, [esp + 0x20]
        call    FUN_00563480
        mov     esi, dword ptr [esp + 0x5c]
        mov     ebx, dword ptr [g_0076B420]
        fld     dword ptr [esi]
        sub     esp, 8
        fstp    qword ptr [esp]
        lea     edx, [esp + 0x34]
        push    0x788524
        push    edx
        call    ebx
        add     esp, 0x10
        lea     eax, [esp + 0x5c]
        push    eax
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     ecx, [esp + 0x28]
        call    FUN_005DDA40
        mov     edx, dword ptr [esp + 0x5c]
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x20]
        push    edx
        push    eax
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_005CBE50
        lea     ecx, [esp + 0x20]
        call    FUN_005CB3D0
        mov     edx, dword ptr [esp + 0x5c]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x774288
        repne   scasb
        not     ecx
        dec     ecx
        push    edx
        add     ecx, 0x774288
        push    ecx
        push    0x774288
        lea     ecx, [esp + 0x20]
        call    FUN_005CBD00
        sub     esp, 8
        fld     dword ptr [esi + 4]
        fstp    qword ptr [esp]
        lea     eax, [esp + 0x34]
        push    0x788524
        push    eax
        call    ebx
        add     esp, 0x10
        lea     ecx, [esp + 0x5c]
        push    ecx
        lea     edx, [esp + 0x30]
        push    edx
        lea     ecx, [esp + 0x28]
        call    FUN_005DDA40
        mov     eax, dword ptr [esp + 0x5c]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x20]
        push    eax
        push    ecx
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_005CBE50
        lea     ecx, [esp + 0x20]
        call    FUN_005CB3D0
        mov     eax, dword ptr [esp + 0x5c]
        or      ecx, 0xffffffff
        push    eax
        xor     eax, eax
        mov     edi, 0x774288
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x774288
        push    ecx
        push    0x774288
        lea     ecx, [esp + 0x20]
        call    FUN_005CBD00
        sub     esp, 8
        fld     dword ptr [esi + 8]
        fstp    qword ptr [esp]
        lea     ecx, [esp + 0x34]
        push    0x788524
        push    ecx
        call    ebx
        add     esp, 0x10
        lea     edx, [esp + 0x5c]
        push    edx
        lea     eax, [esp + 0x30]
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_005DDA40
        mov     ecx, dword ptr [esp + 0x5c]
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_005CBE50
        lea     ecx, [esp + 0x20]
        call    FUN_005DDBE0
        mov     ecx, dword ptr [esp + 0x5c]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77e7d8
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x77e7d8
        push    ecx
        push    0x77e7d8
        lea     ecx, [esp + 0x20]
        call    FUN_005CBD00
        mov     edx, dword ptr [esp + 0x60]
        mov     ecx, dword ptr [esp + 0x58]
        push    edx
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        mov     ecx, ebp
        call    FUN_00695A20
        lea     ecx, [esp + 0x14]
        call    FUN_005DDBE0
        pop     edi
        pop     esi
        pop     ebx
L695DB7:
        pop     ebp
        add     esp, 0x44
        ret     0xc
        nop
        nop
    }
}
