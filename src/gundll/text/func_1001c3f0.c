/*
 * FUN_1001c3f0 (35 B) — __thiscall, RET 0x4. ULTIMATE BASE CONSTRUCTOR.
 * Initializes the root object:
 *   this->vftable = 0x1004a8a8
 *   this->byte_4  = 0
 *   this->dword_8 = param_1
 *   this->dword_C = 0
 *   this->dword_10 = 0
 *   this->dword_18 = 0
 *   this->dword_14 = 0
 * Called by the wave-30 root shared ctors FUN_1001c6e0 / FUN_1001c820
 * (and linked by FUN_1001c9a0). No allocation here — pure field init.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1001c3f0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], 0x1004a8a8
        mov     byte ptr [eax + 0x4], cl
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x14], ecx
        ret     0x4
    }
}
