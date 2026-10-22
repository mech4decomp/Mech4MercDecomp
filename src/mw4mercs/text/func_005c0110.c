/*
 * FUN_005c0110 (190 B) — __thiscall (ECX = this, one byte param at [esp+4]).
 *
 * Setter that toggles a flag at this+0x6ac and, when enabling, calls a
 * virtual method and FUN_0075db4a to build a message, then dispatches
 * virtual methods on this and this->[0xe0].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0075db4a(void);

__declspec(naked) void __stdcall FUN_005c0110(void)
{
    __asm {
        mov     al, byte ptr [esp + 4]
        sub     esp, 0xc
        push    esi
        mov     esi, ecx
        cmp     al, byte ptr [esi + 0x6ac]
        jz      L_c7
        test    al, al
        mov     byte ptr [esi + 0x6ac], al
        jz      L_ae
        mov     eax, dword ptr [esi + 0x6a8]
        test    eax, eax
        jz      L_ae
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 4], ecx
        mov     edx, dword ptr [eax + 0x1c]
        push    edi
        mov     edi, dword ptr [esi + 0x35c]
        mov     dword ptr [esp + 0xc], edx
        mov     eax, dword ptr [eax + 0x2c]
        lea     ecx, [edi + 0x78]
        mov     dword ptr [esp + 0x10], eax
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 4]
        fld     dword ptr [edi + 0x42c]
        mov     edi, dword ptr [esi]
        fst     dword ptr [esi + 0x6b0]
        fmul    dword ptr [eax + 0x2bc]
        push    1
        push    1
        call    FUN_0075db4a
        push    eax
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edi + 0x1bc]
        mov     ecx, dword ptr [esi + 0xe0]
        mov     edx, dword ptr [ecx]
        push    0
        push    4
        call    dword ptr [edx + 4]
        pop     edi
        pop     esi
        add     esp, 0xc
        ret     4
L_ae:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x1c4]
        mov     ecx, dword ptr [esi + 0xe0]
        mov     edx, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [edx + 4]
L_c7:
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
