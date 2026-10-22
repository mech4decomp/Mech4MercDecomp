/*
 * FUN_0065cab0 (118 B) — __fastcall (ECX = this).
 *
 * Sets vtable at this, and if this+0x14 != -2, looks up an object via
 * FUN_004fcb30, checks flags, calls FUN_00415230, and conditionally
 * clears a field. Finally calls FUN_0065acb0(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2030;
extern int *g_007dab44;
extern int g_007dab40;
extern int __fastcall FUN_004fcb30(int);
extern char __fastcall FUN_00415230(int, int);
extern void __fastcall FUN_0065acb0(void);

__declspec(naked) void __fastcall FUN_0065cab0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [g_007f2030]
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [edi + 0x14]
        cmp     ecx, -0x2
        mov     dword ptr [edi], 0x794ad0
        jz      L_0065cb1b
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        test    esi, esi
        jz      L_0065cb1b
        mov     ecx, dword ptr [esi + 0x10]
        shr     ecx, 0x13
        and     cl, 0x1
        cmp     cl, 0x1
        jz      L_0065cb1b
        mov     ecx, dword ptr [esi + 0x4]
        push    ebx
        call    FUN_00415230
        test    al, al
        jz      L_0065cb1b
        mov     edx, dword ptr [esi + 0x514]
        cmp     edx, dword ptr [edi + 0x4]
        jnz     L_0065cb1b
        mov     dword ptr [esi + 0x514], 0x0
L_0065cb1b:
        mov     ecx, edi
        call    FUN_0065acb0
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
