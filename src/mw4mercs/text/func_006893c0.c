/*
 * FUN_006893c0 (68 B) - Grid/array index lookup.
 *
 * __fastcall (ECX = this). Reads two float params from stack, adds
 * DAT_00786dd8, multiplies by DAT_007880fc, converts via FUN_0075db4a
 * (float->int), computes an index into this+8 array, returns the word.
 *
 * RET 8 (two stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_00786dd8;
extern float DAT_007880fc;
extern int FUN_0075db4a(void);

__declspec(naked) int __fastcall FUN_006893c0(void)
{
    __asm {
        fld     dword ptr [esp + 8]
        push    esi
        fadd    dword ptr [DAT_00786dd8]
        push    edi
        mov     esi, ecx
        fmul    dword ptr [DAT_007880fc]
        call    FUN_0075db4a
        fld     dword ptr [esp + 0xc]
        fadd    dword ptr [DAT_00786dd8]
        mov     edi, eax
        shl     edi, 9
        fmul    dword ptr [DAT_007880fc]
        call    FUN_0075db4a
        add     edi, eax
        mov     eax, dword ptr [esi + 8]
        shl     edi, 1
        sub     eax, edi
        mov     ax, word ptr [eax]
        pop     edi
        pop     esi
        ret     8
    }
}
