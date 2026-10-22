/*
 * FUN_00416910 (72 B) — __fastcall (ECX=this) item teardown: calls
 * FUN_00415be0(1,this) to finalize, then unlinks this node from the
 * doubly-linked list (this+0x10 prev / this+0x14 next), then calls
 * FUN_00415d00 (unlink) and FUN_00415cd0 (base destructor).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415be0(void);
extern void __cdecl FUN_00415d00(void);
extern void __cdecl FUN_00415cd0(void);

__declspec(naked) void FUN_00416910(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        mov     edi, dword ptr [esi+4]
        push    esi
        push    1
        mov     ecx, edi
        call    FUN_00415be0
        mov     ecx, dword ptr [esi+0x14]
        mov     eax, dword ptr [esi+0x10]
        xor     edx, edx
        cmp     ecx, edx
        jz      L_16932
        mov     dword ptr [ecx+0x10], eax
        jmp     L_16935
    L_16932:
        mov     dword ptr [edi+0xc], eax
    L_16935:
        cmp     eax, edx
        jz      L_1693e
        mov     dword ptr [eax+0x14], ecx
        jmp     L_16941
    L_1693e:
        mov     dword ptr [edi+0x10], ecx
    L_16941:
        mov     ecx, esi
        mov     dword ptr [esi+0x10], edx
        mov     dword ptr [esi+0x14], edx
        call    FUN_00415d00
        mov     ecx, esi
        call    FUN_00415cd0
        pop     edi
        pop     esi
        ret
    }
}
