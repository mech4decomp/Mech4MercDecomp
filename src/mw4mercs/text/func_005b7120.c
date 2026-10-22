/*
 * FUN_005b7120 (136 B) — __thiscall (ECX = this). Iterates a count from
 * FUN_005b70e0, and for each iteration queries FUN_00417a40; if positive,
 * builds an object via FUN_00415040/FUN_00417aa0, calls a virtual method
 * (vtable+0xac), and on success registers it via FUN_004179b0/FUN_004154d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005b70e0(void);
extern int  FUN_00417a40(void);
extern int  FUN_00415040(int);
extern void *FUN_00417aa0(int);
extern void FUN_004179b0(void *);
extern void FUN_004154d0(void *);

__declspec(naked) void __fastcall FUN_005b7120(void *this)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    edi
        mov     edi, ecx
        call    FUN_005b70e0
        test    eax, eax
        mov     ecx, dword ptr [edi + 0x94]
        lea     ebx, [edi + 0x94]
        mov     dword ptr [esp + 0xc], ebx
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x8], 0x782234
        jle     L_71a2
        push    ebp
        push    esi
        mov     ebp, eax
    L_7150:
        mov     ecx, dword ptr [esp + 0x14]
        call    FUN_00417a40
        test    eax, eax
        jle     L_719d
        mov     ecx, dword ptr [esp + 0x14]
        call    FUN_00417a40
        push    eax
        call    FUN_00415040
        add     esp, 0x4
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00417aa0
        mov     esi, eax
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xac]
        test    al, al
        jz      L_719d
        push    esi
        lea     ecx, [edi + 0x9c]
        call    FUN_004179b0
        push    ebx
        mov     ecx, esi
        call    FUN_004154d0
    L_719d:
        dec     ebp
        jnz     L_7150
        pop     esi
        pop     ebp
    L_71a2:
        pop     edi
        pop     ebx
        add     esp, 0xc
        ret
    }
}
