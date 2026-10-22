/*
 * FUN_00756510 (42 B) — thiscall (ECX = this). Acquires a lock (IAT
 * 0x0076B110 on 0x00858AC8), calls FUN_00757c70 (stdcall) with this->field_0,
 * sets this->field_0x83 = 1, then releases the lock (IAT 0x0076B100).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__stdcall *g_76b110)(int);
extern int (__stdcall *g_76b100)(int);
extern void __stdcall FUN_00757c70(void *p);

__declspec(naked) void __fastcall FUN_00756510(void *this)
{
    __asm {
        push    esi
        push    0x858ac8
        mov     esi, ecx
        call    dword ptr [g_76b110]
        mov     eax, dword ptr [esi]
        push    eax
        mov     byte ptr [esi + 0x83], 1
        call    FUN_00757c70
        push    0x858ac8
        call    dword ptr [g_76b100]
        pop     esi
        ret
    }
}
