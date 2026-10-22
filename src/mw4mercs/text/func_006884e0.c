/*
 * FUN_006884E0 (34 B) — Vtable 0x798C44 slot 18: deserialization read wrapper.
 *
 * Calls vtable[0x20] on the stream (read 12 bytes into this+0x20),
 * then calls FUN_006B0520 (deserialization read body).
 *
 * __thiscall (ECX = this), RET 4 (one stack param: stream*).
 *
 * Disassembly:
 *   56                   push    esi
 *   57                   push    edi
 *   8B 7C 24 0C          mov     edi, [esp+0xC]    ; stream
 *   8B 07                mov     eax, [edi]         ; stream vtable
 *   8B F1                mov     esi, ecx           ; this
 *   6A 0C                push    0xC                ; size = 12
 *   8D 4E 20             lea     ecx, [esi+0x20]    ; buf = this+0x20
 *   51                   push    ecx
 *   8B CF                mov     ecx, edi           ; stream
 *   FF 50 20             call    dword ptr [eax+0x20] ; stream->read(buf, 12)
 *   57                   push    edi                ; stream
 *   8B CE                mov     ecx, esi           ; this
 *   E8 xx xx xx xx       call    FUN_006B0520       ; deserialize body
 *   5F                   pop     edi
 *   5E                   pop     esi
 *   C2 04 00             ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006b0520(void *stream);

__declspec(naked) void __stdcall FUN_006884e0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x0C]
        mov     eax, dword ptr [edi]
        mov     esi, ecx
        push    0x0C
        lea     ecx, [esi + 0x20]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        push    edi
        mov     ecx, esi
        call    FUN_006b0520
        pop     edi
        pop     esi
        ret     4
    }
}
