/*
 * FUN_004ea190 (240 B) — __thiscall. MLR/Adept core: teardown/reset. Sets
 * this->0x14c flags, calls FUN_004154d0 with a hashed pointer, walks a
 * linked list at this+0x16c calling FUN_00417ad0 / FUN_004179b0 / a virtual
 * method (vtable+0x34), then a 0x40-iteration loop clearing per-slot data
 * (virtual call + store 0), and finally calls FUN_006d1980 if DAT_00840048.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004154d0(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_006d1980(void);

extern int g_007dab44;   /* DAT_007dab44 */
extern int g_007dab40;   /* DAT_007dab40 */
extern int g_00840048;   /* DAT_00840048 */

__declspec(naked) void FUN_004ea190(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x14c]
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        push    esi
        and     eax, 0xfffffeff
        push    edi
        mov     edi, dword ptr [g_007dab40]
        or      eax, 0x80
        mov     dword ptr [ebx + 0x14c], eax
        xor     edx, edi
        mov     eax, dword ptr [edx + 0x1c]
        xor     eax, 0x85739531
        add     eax, 0x18c
        push    eax
        mov     ecx, ebx
        call    FUN_004154d0
        lea     eax, [ebx + 0x16c]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0xc], 0x772d80
        test    eax, eax
        jz      LEA219
LEA1EB:
        mov     esi, dword ptr [eax]
        test    esi, esi
        jz      LEA219
        lea     ecx, [esp + 0xc]
        call    FUN_00417ad0
        push    esi
        lea     ecx, [ebx + 0x164]
        call    FUN_004179b0
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [esp + 0x14]
        __emit 0xEB   /* __emit: MSVC6 miscomputes backward jmp rel (off-by-4: call relocs between branch and target) */
        __emit 0xD2
LEA219:
        mov     eax, dword ptr [ebx + 0x17c]
        mov     edi, dword ptr [eax + 0x144]
        push    ebp
        mov     ebp, 0x40
LEA22B:
        mov     esi, dword ptr [edi]
        mov     ecx, dword ptr [esi + 0x14c]
        test    ecx, ecx
        jz      LEA23D
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
LEA23D:
        add     edi, 0x4
        dec     ebp
        mov     dword ptr [esi + 0x14c], 0x0
        jnz     LEA22B
        mov     ecx, dword ptr [g_00840048]
        test    ecx, ecx
        pop     ebp
        jz      LEA279
        xor     eax, eax
        mov     al, byte ptr [ebx + 0x151]
        xor     edx, edx
        mov     dl, byte ptr [ebx + 0x150]
        push    0x8
        push    0x8
        shl     eax, 0x3
        push    eax
        shl     edx, 0x3
        push    edx
        call    FUN_006d1980
LEA279:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
    }
}
