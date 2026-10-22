/*
 * FUN_005acf50 (76 B) — __thiscall (ECX = this).
 *
 * Calls FUN_004c4140(this+0x24, this+0x28, this+0x2c, this+0x30) with
 * ECX = [ [0x007dc6e0] + 0x4c ] + 0x24; then FUN_005ad080(0) (this=this);
 * iterates a linked list at this->0x10 calling FUN_005ae3c0() on each
 * node's [0] while node and node->[0] are non-null; sets this->0x20 = 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004c4140(void *a, void *b, void *c, void *d);
extern void __fastcall FUN_005ad080(void *this, int param);
extern void __fastcall FUN_005ae3c0(void *this);

__declspec(naked) void __fastcall FUN_005acf50(void)
{
    

extern int DAT_007dc6e0;
__asm {
push    esi
        push    edi
        mov     edi, ecx
        lea     eax, [edi + 0x30]
        push    eax
        lea     ecx, [edi + 0x2c]
        push    ecx
        mov ecx, dword ptr [DAT_007dc6e0]
        lea     edx, [edi + 0x28]
        push    edx
        mov     edx, dword ptr [ecx + 0x4c]
        mov     ecx, dword ptr [edx + 0x24]
        lea     eax, [edi + 0x24]
        push    eax
        call    FUN_004c4140
        push    0
        mov     ecx, edi
        call    FUN_005ad080
        mov     esi, dword ptr [edi + 0x10]
L_81:
        test    esi, esi
        jz      L_95
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      L_95
        call    FUN_005ae3c0
        mov     esi, dword ptr [esi + 0x4]
        jmp     L_81
L_95:
        mov     byte ptr [edi + 0x20], 1
        pop     edi
        pop     esi
        ret
    }


}
