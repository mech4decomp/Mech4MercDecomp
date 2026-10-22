/*
 * FUN_0068F48E (228 B) — in-.text data block function (block 0x68F48E).
 * Serializes a structure via repeated vtable dispatch (call [edx+0x24]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0068F48E(void)
{
    __asm {
        nop
        nop
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    1
        lea     ecx, [edi + 0x27]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x26]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    2
        lea     eax, [edi + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [edi + 8]
        mov     ecx, dword ptr [edi + 0xc]
        sub     ecx, edx
        mov     edx, dword ptr [esi]
        sar     ecx, 3
        push    4
        lea     eax, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ebp, dword ptr [edi + 8]
        mov     ebx, dword ptr [edi + 0xc]
        xor     ecx, ecx
        mov     eax, ebp
        cmp     eax, ebx
        mov     dword ptr [esp + 0x18], ecx
        je      L8F545
L8F532:
        mov     edi, dword ptr [edi + 4]
L8F535:
        cmp     edi, eax
        je      L8F541
        add     eax, 8
        inc     ecx
        cmp     eax, ebx
        jne     L8F535
L8F541:
        mov     dword ptr [esp + 0x18], ecx
L8F545:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edi, ebp
        cmp     edi, ebx
        je      L8F56A
L8F559:
        mov     edx, dword ptr [esi]
        push    8
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        add     edi, 8
        cmp     edi, ebx
        jne     L8F559
L8F56A:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     4
    }
}
