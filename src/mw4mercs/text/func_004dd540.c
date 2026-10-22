/*
 * FUN_004dd540 (66 B) — __thiscall MLR/Adept object constructor.
 * Sets vtable 0x773860, calls FUN_004dd450 (state engine) and
 * FUN_004da840, stores fields at +0x1c/+0x20/+0x24.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc6a4;
extern void __cdecl FUN_004dd450(void);
extern void __cdecl FUN_004da840(void);

__declspec(naked) void FUN_004dd540(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x14]
        mov     edx, dword ptr [g_007dc6a4]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x8]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004dd450
        mov     eax, dword ptr [esp+0x10]
        mov     ecx, dword ptr [esp+0xc]
        push    eax
        mov     dword ptr [esi], 0x773860
        mov     dword ptr [esi+0x1c], ecx
        call    FUN_004da840
        mov     cl, byte ptr [esp+0x1c]
        mov     dword ptr [esi+0x20], eax
        mov     byte ptr [esi+0x24], cl
        mov     eax, esi
        pop     esi
        ret     0x18
    }
}
