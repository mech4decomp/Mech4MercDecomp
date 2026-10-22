/*
 * FUN_0065ad40 (183 B) - __thiscall. Looks up a record via FUN_006533d0
 * (two attempts with different flags), then resolves it through
 * FUN_004fcb30 (with a XOR-decoded vtable/type key) and validates via
 * FUN_00415230. Returns the resolved record or 0. RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007f268c;

extern void __cdecl FUN_006533d0(void);
extern void __cdecl FUN_004fcb30(void);
extern char __cdecl FUN_00415230(int);

__declspec(naked) void FUN_0065ad40(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [eax + 0x170]
        mov     ecx, dword ptr [esi + 0x3d4]
        test    ecx, ecx
        push    edi
        jz      L_adee
        cmp     byte ptr [eax + 0x544], 0x1
        jz      L_adee
        mov     ebp, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        push    edi
        push    0x3
        push    ebx
        push    0x3f
        push    0x2
        push    esi
        call    FUN_006533d0
        add     esp, 0x1c
        test    eax, eax
        jg      L_ada5
        test    ebp, ebp
        jz      L_adee
        push    0x0
        push    edi
        push    0x1
        push    ebx
        push    0x3f
        push    0x2
        push    esi
        call    FUN_006533d0
        add     esp, 0x1c
        test    eax, eax
        jle     L_adee
L_ada5:
        mov     ecx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [ecx]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx + 0x10]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        test    esi, esi
        jz      L_adee
        mov     edx, dword ptr [esi + 0x10]
        shr     edx, 0x13
        test    dl, 0x1
        jnz     L_adee
        mov     eax, dword ptr [g_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_adee
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
L_adee:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0xc
    }
}
