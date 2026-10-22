/*
 * FUN_005af2b0 (154 B) — __thiscall constructor with 4 stack params (RET 0x10).
 * Calls FUN_004d9940(this, p1, p2, p3, p4), then copies fields from the
 * source object (EDI = p2) into this, sets vtable 0x785b90, and stores the
 * result of FUN_00707e70(0) as a double at [this+0xec].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d9940(void);
extern double __stdcall FUN_00707e70(int);

__declspec(naked) void __stdcall FUN_005af2b0(void)
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
        fld     dword ptr [edi + 0x64]
        mov     cx, word ptr [edi + 0x60]
        fst     dword ptr [esi + 0x16c]
        mov     dx, word ptr [edi + 0x62]
        fstp    dword ptr [esi + 0x170]
        xor     eax, eax
        mov     word ptr [esi + 0x16a], ax
        mov     word ptr [esi + 0x168], 0xFFFF
        mov     dword ptr [esi + 0x178], eax
        mov     dword ptr [esi], 0x785B90
        mov     word ptr [esi + 0x168], cx
        mov     cl, byte ptr [edi + 0x68]
        mov     word ptr [esi + 0x16a], dx
        mov     dl, byte ptr [edi + 0x69]
        push    eax
        mov     dword ptr [esi + 0x17c], eax
        mov     byte ptr [esi + 0x174], cl
        mov     byte ptr [esi + 0x175], dl
        mov     byte ptr [esi + 0x176], 0x1
        mov     byte ptr [esi + 0x177], al
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
