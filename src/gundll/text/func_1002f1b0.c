/*
 * FUN_1002F1B0 (89 B) - __stdcall, RET 0xC.  COM QueryInterface: compares
 * arg2 (riid) against IID at 0x1005151c and IID_IUnknown (0x100492a0); on
 * match AddRef(arg3) via vtable[1] and set *arg1=arg3, return S_OK; else
 * E_NOINTERFACE (0x80004002) and *arg1=NULL.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1002F1B0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     ebx, ebx
        mov     ecx, 0x4
        mov     edi, edx
        mov     esi, 0x1005151c
        xor     ebp, ebp
        repe    cmpsd
        mov     eax, 0x80004002
        je      L_found
        mov     edi, edx
        mov     ecx, 0x4
        mov     esi, 0x100492a0
        xor     edx, edx
        repe    cmpsd
        jne     L_noif
    L_found:
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [esp + 0x1c]
        pop     edi
        mov     dword ptr [ecx], esi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0xc
    L_noif:
        mov     edx, dword ptr [esp + 0x1c]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [edx], ebx
        pop     ebx
        ret     0xc
    }
}
