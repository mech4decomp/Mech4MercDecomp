/*
 * FUN_0065c320 (281 B) — ABL region init/validation routine. __fastcall
 * (ECX=this). Calls FUN_0065ab00, zeroes a set of object fields, builds a
 * 3-dword struct from a nested pointer chain, calls FUN_0065c0b0, then
 * validates the result via FUN_004fcb30 / FUN_00415230 and either returns
 * 0 or calls FUN_0065c4e0 and returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f202c;
extern int g_007f2030;
extern int g_007dab44;
extern int g_007dab40;

extern void FUN_0065ab00(void);
extern void FUN_0065c0b0(void);
extern void FUN_004fcb30(void);
extern void FUN_00415230(void);
extern void FUN_00665c30(void);
extern void FUN_0065c4e0(void);

__declspec(naked) void FUN_0065c320(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        mov     eax, dword ptr [esi+4]
        push    0
        push    eax
        call    FUN_0065ab00
        mov     dword ptr [esi+0x1c], 0
        mov     edx, dword ptr [esi+0x1c]
        mov     dword ptr [esi+0x28], edx
        mov     edx, dword ptr [esi+0x1c]
        mov     dword ptr [esi+0x18], 0
        mov     ecx, dword ptr [esi+0x18]
        mov     dword ptr [esi+0x24], ecx
        mov     ecx, dword ptr [esi+0x18]
        mov     dword ptr [esi+0x20], 0
        mov     eax, dword ptr [esi+0x20]
        mov     dword ptr [esi+0x2c], eax
        mov     eax, dword ptr [esi+0x20]
        mov     dword ptr [esi+0x34], edx
        mov     ebx, dword ptr [esi+4]
        mov     dword ptr [esi+0x30], ecx
        mov     ecx, dword ptr [ebx+0x170]
        mov     dword ptr [esi+0x38], eax
        mov     eax, dword ptr [ecx+0xd8]
        mov     edx, dword ptr [eax+0x8c]
        add     eax, 0x80
        mov     dword ptr [esp+0x18], edx
        mov     ecx, dword ptr [eax+0x1c]
        mov     dword ptr [esp+0x1c], ecx
        mov     edx, dword ptr [eax+0x2c]
        mov     eax, dword ptr [g_007f202c]
        push    eax
        lea     ecx, [esp+0x1c]
        push    ecx
        mov     dword ptr [esp+0x28], edx
        call    FUN_0065c0b0
        mov     edx, dword ptr [g_007f2030]
        add     esp, 0x10
        cmp     eax, -2
        mov     dword ptr [esi+0x14], eax
        mov     dword ptr [esp+0xc], edx
        jz      L_40d
        mov     ecx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [ecx]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx+0x10]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     edi, eax
        test    edi, edi
        jz      L_40d
        mov     edx, dword ptr [edi+0x10]
        shr     edx, 0x13
        and     dl, 1
        cmp     dl, 1
        jz      L_40d
        mov     eax, dword ptr [esp+0xc]
        mov     ecx, dword ptr [edi+4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_40d
        mov     edi, dword ptr [edi+0x514]
        cmp     edi, ebx
        jz      L_40d
        test    edi, edi
        jnz     L_420
    L_40d:
        mov     ecx, dword ptr [ebx+0x170]
        push    ecx
        call    FUN_00665c30
        add     esp, 4
        test    al, al
        jnz     L_429
    L_420:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x10
        ret
    L_429:
        mov     ecx, esi
        call    FUN_0065c4e0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        add     esp, 0x10
        ret
    }
}
