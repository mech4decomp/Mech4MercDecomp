/*
 * FUN_005f0740 (91 B) — __thiscall (ECX=this), RET 0x10 (four stack params).
 *
 * Calls FUN_004d9940 with four params, then copies fields from param2
 * (EDI) into this (ESI) and sets the vtable pointer to 0x78A150.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004d9940(void *a, void *b, void *c, void *d);

__declspec(naked) void __stdcall FUN_005f0740(void *p1, void *p2, void *p3, void *p4)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov     ecx, esi
        call    FUN_004d9940
        mov     eax, dword ptr [edi + 0x60]
        mov     cl, byte ptr [edi + 0x64]
        mov     edx, dword ptr [edi + 0x68]
        mov     dword ptr [esi + 0x16C], eax
        pop     edi
        mov     dword ptr [esi], 0x78A150
        mov     byte ptr [esi + 0x170], cl
        mov     dword ptr [esi + 0x168], edx
        mov     dword ptr [esi + 0x178], 0
        mov     dword ptr [esi + 0x174], 0xFFFFFFFF
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
