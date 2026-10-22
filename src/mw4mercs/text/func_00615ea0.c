/*
 * FUN_00615EA0 (165 B) — Serialize a list of objects to a stream.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: stream*).
 * Constructs a local iterator (vtable 0x779F0C) over this+0x54, then
 * loops: for each object writes fields +0x18/+0x20/+0x24/+0x2C/+0x30
 * (4 bytes each) via stream->vtable[0x24], and +0x10/+0x14 via
 * FUN_00412a50. Destroys the iterator and returns.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00412a50(void);

__declspec(naked) void __fastcall FUN_00615ea0(void)
{
    __asm {
        sub     esp, 0x14
        add     ecx, 0x54
        push    edi
        push    ecx
        lea     ecx, [esp + 8]
        call    FUN_00416bc0
        lea     ecx, [esp + 4]
        mov     dword ptr [esp + 4], 0x779f0c
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jz      l_done
        push    esi
        mov     esi, dword ptr [esp + 0x20]
    l_loop:
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [edi + 0x18]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        lea     edx, [edi + 0x10]
        push    edx
        push    esi
        call    FUN_00412a50
        lea     eax, [edi + 0x14]
        push    eax
        push    esi
        call    FUN_00412a50
        mov     edx, dword ptr [esi]
        add     esp, 0x10
        push    4
        lea     eax, [edi + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        add     edi, 0x30
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ecx, [esp + 8]
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jnz     l_loop
        pop     esi
    l_done:
        lea     ecx, [esp + 4]
        call    FUN_00416c60
        pop     edi
        add     esp, 0x14
        ret     4
    }
}
