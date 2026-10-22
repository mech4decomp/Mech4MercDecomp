/*
 * FUN_100011F0 (75 B) - __stdcall, RET 0xC.  COM factory QueryInterface
 * (vtable[0] @0x1004926c): compares riid to IID_IUnknown (0x100492a0) and
 * IID_IClassFactory (0x10049280); on match AddRef(this) and set *ppv=this,
 * return S_OK; else E_NOINTERFACE (0x80004002).
 * (Ghidra missed this entry - transcribed from reference bytes.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_100011F0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        push    edi
        mov     ecx, 0x4
        mov     edi, 0x100492a0
        mov     esi, eax
        xor     edx, edx
        repe    cmpsd
        jz      L_found
        mov     ecx, 0x4
        mov     edi, 0x10049280
        mov     esi, eax
        xor     edx, edx
        repe    cmpsd
        jz      L_found
        pop     edi
        mov     eax, 0x80004002
        pop     esi
        ret     0xc
    L_found:
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [esp + 0x14]
        pop     edi
        mov     dword ptr [ecx], esi
        xor     eax, eax
        pop     esi
        ret     0xc
    }
}
