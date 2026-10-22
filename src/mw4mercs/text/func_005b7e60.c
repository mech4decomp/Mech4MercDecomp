/*
 * FUN_005b7e60 (82 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Returns a pointer into the object depending on flags/state:
 *   [this+0x16a] != 0            -> this+0x273
 *   [this+0x168]==0 && param==0  -> 0
 *   [this+0x16c]==0              -> this+0x174
 *   [this+0x16c]==1              -> this+0x273
 *   [this+0x16c]==2              -> this+0x372
 *   else                         -> 0
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_005b7e60(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x16a]
        test    al, al
        jz      L_168
    L_273:
        lea     eax, [ecx + 0x273]
        ret     4
    L_168:
        mov     al, byte ptr [ecx + 0x168]
        test    al, al
        jnz     L_state
        mov     al, byte ptr [esp + 0x4]
        test    al, al
        jnz     L_state
        xor     eax, eax
        ret     4
    L_state:
        mov     eax, dword ptr [ecx + 0x16c]
        sub     eax, 0
        jz      L_174
        dec     eax
        jz      L_273
        dec     eax
        jz      L_372
        xor     eax, eax
        ret     4
    L_372:
        lea     eax, [ecx + 0x372]
        ret     4
    L_174:
        lea     eax, [ecx + 0x174]
        ret     4
    }
}
