/*
 * FUN_1000df30 (148 B) - __stdcall, 2 params. If object invalid (+8 null)
 * returns 0x80040290; validates param_2 via IsBadWritePtr (IAT @ 0x10021064).
 * Reports the pool's type (+0xc -> +0x1c) into *param_2; if type==7 and
 * FUN_1000c8e0 returns >0x1e, marks *param_2=1, releases the pool (vtable
 * +0x30), and if that fails signals the event (SetEvent IAT @ 0x1002109c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * if (!self->field8) return 0x80040290;
 * if (IsBadWritePtr(out, 4)) return 0x80070057;
 * if (!self->fieldc) { *out = 1; return 0; }
 * out = self->fieldc->field1c;
 * if (self->fieldc->field1c == 7 &&
 * FUN_1000c8e0(self->fieldc, field60, field64) > 0x1e) {
 * out = 1;
 * if (!self->fieldc->vtable->method30(self->fieldc, 0x2710, 0) &&
 * self->field28)
 * SetEvent(self->field28);
 * return 0;
 */

extern void *g_10021064;   /* IsBadWritePtr IAT @ 0x10021064 */
extern void *g_1002109c;   /* SetEvent IAT @ 0x1002109c */
extern void FUN_1000c8e0(void);

__declspec(naked) int __cdecl FUN_1000df30(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jnz     Ldf47
        pop     edi
        mov     eax, 0x80040290
        pop     esi
        ret     0x8
Ldf47:
        mov     edi, dword ptr [esp + 0x10]
        push    0x4
        push    edi
        call    dword ptr [g_10021064]
        test    eax, eax
        jz      Ldf62
        pop     edi
        mov     eax, 0x80070057
        pop     esi
        ret     0x8
Ldf62:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jnz     Ldf74
        mov     dword ptr [edi], 0x1
        pop     edi
        pop     esi
        ret     0x8
Ldf74:
        mov     eax, dword ptr [eax + 0x1c]
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [esi + 0xc]
        cmp     dword ptr [eax + 0x1c], 0x7
        jnz     Ldfbd
        mov     ecx, dword ptr [eax + 0x64]
        mov     edx, dword ptr [eax + 0x60]
        push    ecx
        push    edx
        push    eax
        call    FUN_1000c8e0
        cmp     eax, 0x1e
        jbe     Ldfbd
        mov     dword ptr [edi], 0x1
        mov     eax, dword ptr [esi + 0xc]
        push    0x0
        push    0x2710
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x30]
        test    al, al
        jnz     Ldfbd
        mov     esi, dword ptr [esi + 0x28]
        test    esi, esi
        jz      Ldfbd
        push    esi
        call    dword ptr [g_1002109c]
Ldfbd:
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x8
    }
}
