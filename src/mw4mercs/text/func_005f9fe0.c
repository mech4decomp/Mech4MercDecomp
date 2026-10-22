/*
 * FUN_005f9fe0 (142 B) — __thiscall. Frees a sub-object at this+0x130
 * (FUN_004084e0), calls a virtual on this+0xe0, sets a flag on this+0xd8,
 * then dispatches FUN_004d67e0 (with a XOR-decoded vtable ptr from
 * DAT_007dab44/0x007dab40), FUN_004db240, and virtual this+0x48.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007dab44;
extern int DAT_007dab40;

extern void FUN_004084e0(void);
extern void FUN_004d67e0(void);
extern void FUN_004db240(void);

__declspec(naked) void FUN_005f9fe0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi+0x130]
        test    esi, esi
        jz      L_a010
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_9ffd
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_9ffd:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi+0x130], 0
    L_a010:
        mov     ecx, dword ptr [edi+0xe0]
        mov     eax, dword ptr [ecx]
        push    0
        push    0x1
        call    dword ptr [eax+0x4]
        mov     esi, dword ptr [edi+0xd8]
        mov     ecx, dword ptr [esi+0x18]
        mov     edx, dword ptr [esi]
        or      ecx, 0xc0
        mov     dword ptr [esi+0x18], ecx
        mov     ecx, esi
        call    dword ptr [edx+0x10]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+0x14]
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx]
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004d67e0
        mov     ecx, edi
        call    FUN_004db240
        mov     eax, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax+0x48]
        pop     edi
        pop     esi
        ret
    }
}
