/*
 * FUN_00429730 (177 B) — __thiscall MLR object constructor. Calls base
 * ctor FUN_004871c0, installs vtable 0x76dfec, then reads a set of 4-byte
 * fields from a stream object (vtable dispatch at +0x20) into +0x20..+0x38.
 * If the count at +0x38 is nonzero, allocates a buffer via the stream's
 * +0x18 method and stores it at +0x34. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b9678;

extern void __cdecl FUN_004871c0(int a, int b, int c);

__declspec(naked) void FUN_00429730(void)
{
    __asm {
        mov     eax, dword ptr [esp+8]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x10]
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [g_007b9678]
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_004871c0
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi+0x20]
        mov     dword ptr [esi+0x34], 0
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi+0x38], 0
        mov     dword ptr [esi], 0x76dfec
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    4
        lea     ecx, [esi+0x24]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi+0x2c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    4
        lea     ecx, [esi+0x30]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi+0x28]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [edi]
        push    4
        lea     ebx, [esi+0x38]
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jbe     L_297d2
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax+4]
        mov     edx, dword ptr [edi]
        shl     ebx, 4
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi+0x34], eax
        call    dword ptr [edx+0x18]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     8
L_297d2:
        pop     edi
        mov     dword ptr [esi+0x34], 0
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     8
    }
}
