/*
 * FUN_004ec5f0 (215 B) — __thiscall (RET 0x4, 1 arg). MLR/Adept audio
 * sample constructor. Calls FUN_00415180(g_007dc7e0), zeroes fields,
 * sets vtable 0x76cd9c, calls __thiscall FUN_004d1f10(this+0x10), then
 * performs a series of virtual calls (via [vtable+0x20]) on param_1 and
 * its returned objects, sets vtable 0x774798, and stores local_8
 * (0xffff) into this+0x78. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc7e0;
extern void __stdcall FUN_00415180(int);
extern void __stdcall FUN_004d1f10(void);
extern void __stdcall FUN_004d21d0(int, int);

__declspec(naked) void* FUN_004ec5f0(void)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [g_007dc7e0]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     edi, edi
        lea     ebp, [esi+0x10]
        mov     ecx, ebp
        mov     dword ptr [esi+8], edi
        mov     dword ptr [esi+0xc], edi
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_004d1f10
        mov     ebx, dword ptr [esp+0x1c]
        mov     edx, dword ptr [ebx]
        mov     dword ptr [esi+0x84], edi
        push    4
        lea     eax, [esp+0x14]
        mov     dword ptr [esi+0x88], edi
        mov     dword ptr [esi+0x8c], edi
        mov     dword ptr [esi+0x90], edi
        mov     dword ptr [esi+0x94], edi
        push    eax
        mov     ecx, ebx
        mov     dword ptr [esi+0x98], edi
        mov     dword ptr [esi+0x9c], edi
        mov     dword ptr [esi+0xa0], edi
        mov     dword ptr [esi+0xa4], edi
        mov     dword ptr [esi], 0x774798
        mov     word ptr [esp+0x18], 0xffff
        mov     word ptr [esp+0x1a], di
        call    dword ptr [edx+0x20]
        push    edi
        lea     ecx, [esp+0x14]
        push    ecx
        mov     ecx, ebp
        call    FUN_004d21d0
        mov     edx, dword ptr [ebx]
        push    4
        lea     eax, [esp+0x18]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    1
        lea     ecx, [esi+0x80]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    1
        lea     ecx, [esi+0x81]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [esp+0x14]
        mov     dword ptr [esi+0x7c], edi
        pop     edi
        mov     dword ptr [esi+0x78], edx
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     4
    }
}
