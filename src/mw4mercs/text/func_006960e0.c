/*
 * FUN_006960E0 (374 B) — __thiscall (this in ECX), RET 0xC (3 params).
 * Sibling of FUN_00695F60: calls 0x696b20, dispatches on [esp+0x30]
 * (0/1/default), builds/format strings from constants 0x7994c0 / 0x7994d4 /
 * 0x7994d0, and calls several helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7994c0[];
extern char g_7994d4[];
extern char g_7994d0[];

extern void __cdecl FUN_00696B20(void);
extern void __cdecl FUN_00547BA0(void);
extern void __cdecl FUN_00563480(void);
extern void __cdecl FUN_00695A20(void);
extern void __cdecl FUN_005E1C30(void);
extern void __cdecl FUN_005480C0(void);
extern void __cdecl FUN_005CB3D0(void);

__declspec(naked) void FUN_006960E0(void)
{
    __asm {
        sub     esp, 0x20
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_00696B20
        test    al, al
        je      L_epilogue
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [eax]
        xor     eax, eax
        sub     ecx, eax
        je      L_case0
        dec     ecx
        je      L_case1
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0x34]
        push    edx
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x14], eax
        call    FUN_00547BA0
        mov     eax, dword ptr [esp + 0x34]
        or      ecx, -1
        push    eax
        xor     eax, eax
        mov     edi, offset g_7994c0
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, offset g_7994c0
        push    ecx
        push    offset g_7994c0
        lea     ecx, [esp + 0x1c]
        call    FUN_00563480
        mov     ecx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x2c]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00695A20
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
        sub     ecx, eax
        push    ecx
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_005E1C30
        pop     edi
        pop     esi
        add     esp, 0x20
        ret     0xc
L_case1:
        lea     edx, [esp + 0xc]
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0xc], eax
        push    edx
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00547BA0
        or      ecx, -1
        xor     eax, eax
        mov     edi, offset g_7994d4
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, offset g_7994d4
        push    ecx
        push    offset g_7994d4
        lea     ecx, [esp + 0x18]
        call    FUN_005480C0
        mov     ecx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x2c]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00695A20
        lea     ecx, [esp + 0x10]
        call    FUN_005CB3D0
        pop     edi
        pop     esi
        add     esp, 0x20
        ret     0xc
L_case0:
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0xf]
        push    edx
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x14], eax
        call    FUN_00547BA0
        or      ecx, -1
        xor     eax, eax
        mov     edi, offset g_7994d0
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, offset g_7994d0
        push    ecx
        push    offset g_7994d0
        lea     ecx, [esp + 0x24]
        call    FUN_005480C0
        mov     eax, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x2c]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_00695A20
        lea     ecx, [esp + 0x1c]
        call    FUN_005CB3D0
L_epilogue:
        pop     edi
        pop     esi
        add     esp, 0x20
        ret     0xc
    }
}
