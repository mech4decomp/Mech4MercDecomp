/*
 * FUN_004eb4f0 (134 B) — __thiscall MLR/Adept constructor (14 args).
 * Calls FUN_004ebde0(this, p1..p7), copies p8..p14 (incl. two 3-float
 * vectors) into members, sets vtable ptr 0x7746bc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004ebde0(void);
extern int g_007746bc;

__declspec(naked) void FUN_004eb4f0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x1c]
        mov     edx, dword ptr [esp+0x14]
        push    esi
        push    eax
        mov     eax, dword ptr [esp+0x18]
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x20]
        push    ecx
        mov     ecx, dword ptr [esp+0x18]
        push    edx
        mov     edx, dword ptr [esp+0x18]
        push    eax
        mov     eax, dword ptr [esp+0x18]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_004ebde0
        mov     ecx, dword ptr [esp+0x2c]
        mov     edx, dword ptr [esp+0x30]
        mov     eax, dword ptr [esp+0x34]
        mov     dword ptr [esi+0x3c], eax
        mov     eax, dword ptr [esp+0x24]
        mov     dword ptr [esi+0x34], ecx
        mov     ecx, dword ptr [esp+0x38]
        mov     dword ptr [esi+0x38], edx
        mov     edx, dword ptr [esp+0x3c]
        mov     dword ptr [esi+0x40], ecx
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esi+0x44], edx
        mov     edx, dword ptr [eax+0x4]
        mov     eax, dword ptr [eax+0x8]
        mov     dword ptr [esi+0x50], eax
        mov     eax, dword ptr [esp+0x28]
        mov     dword ptr [esi+0x48], ecx
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esi+0x4c], edx
        mov     edx, dword ptr [eax+0x4]
        mov     eax, dword ptr [eax+0x8]
        mov     dword ptr [esi+0x54], ecx
        mov     dword ptr [esi+0x5c], eax
        mov     dword ptr [esi+0x58], edx
        mov     dword ptr [esi], offset g_007746bc
        mov     eax, esi
        pop     esi
        ret     0x38
    }
}
