/*
 * FUN_1000e2f0 (62 B) - __stdcall, 3 params. Sets param_2[3]=7, resets the
 * event (ResetEvent IAT @ 0x100210a0), calls FUN_100122b0(param_1+0xc,
 * param_2), then if param_3!=0 or param_1[10]>0xf dispatches through the
 * object's vtable (+0xc).
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_1000e2f0 (62 B, __stdcall, 3 params) -- reset an event, append a list
 * node, and conditionally dispatch through the object's vtable:
 * param_2->state = 7;
 * if (param_2->handle) ResetEvent(param_2->handle);
 * ((Sub*)(param_1+0xc))->method(param_2);
 * if (param_3 != 0 || param_1->count > 0xf)
 * ((fn)param_1->vtable[3])(param_1);
 */

extern void *g_100210a0;   /* ResetEvent IAT @ 0x100210a0 */
extern void FUN_100122b0(void);

__declspec(naked) void __cdecl FUN_1000e2f0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        mov     dword ptr [esi + 0xc], 0x7
        test    eax, eax
        jz      Le309
        push    eax
        call    dword ptr [g_100210a0]
Le309:
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        lea     ecx, [esi + 0xc]
        call    FUN_100122b0
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jnz     Le324
        cmp     dword ptr [esi + 0x28], 0x10
        jc      Le32a
Le324:
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0xc]
Le32a:
        pop     esi
        ret     0xc
    }
}
