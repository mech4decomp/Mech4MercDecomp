/*
 * FUN_5e002430 (448 B) — __thiscall (ECX=this) constructor, RET 8 (2 stack
 * params). Sets up vtable pointers, zeroes large member arrays, calls
 * sub-constructors, and copies a 0x98-dword template from 0x5e038158.
 *
 * __thiscall, RET 8.
 *
 * Match: target 100%
 */

extern void __cdecl FUN_5e01e700(void);
extern void __cdecl FUN_5e00e0f0(void);
extern void __cdecl FUN_5e0121d0(void);

extern int g_5e0359a0;   /* vtable ptr */
extern int g_5e0358dc;   /* vtable ptr */
extern int g_5e035834;   /* vtable ptr */
extern int g_5e035770;   /* vtable ptr */
extern int g_5e0355a0;   /* string/guid arg */
extern int g_5e035650;   /* string/guid arg */
extern int g_5e035660;   /* string/guid arg */
extern int g_5e038158;   /* 0x98-dword template source */
extern int g_5e77a6c8;   /* global float target */

__declspec(naked) void __stdcall FUN_5e002430(void)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        push    ebp
        push    esi
        lea     esi, [ebx + 0x400c]
        push    edi
        mov     dword ptr [ebx], OFFSET g_5e0359a0
        mov     ecx, esi
        mov     dword ptr [ebx + 0x4], OFFSET g_5e0358dc
        call    FUN_5e01e700
        lea     ecx, [ebx + 0x41f4]
        call    FUN_5e00e0f0
        lea     ecx, [ebx + 0x427c]
        call    FUN_5e00e0f0
        lea     ecx, [ebx + 0x4304]
        call    FUN_5e00e0f0
        mov     ecx, 0x1000
        xor     eax, eax
        lea     edi, [ebx + 0xc]
        mov     dword ptr [ebx], OFFSET g_5e035834
        mov     dword ptr [ebx + 0x4], OFFSET g_5e035770
        lea     ebp, [ebx + 0x41e4]
        rep stosd
        mov     ecx, 0x1a
        mov     edi, esi
        rep stosd
        mov     ecx, dword ptr [esp + 0x14]
        xor     esi, esi
        lea     eax, [ebx + 0x41e0]
        lea     edi, [ebx + 0x41e8]
        cmp     ecx, esi
        mov     dword ptr [ebx + 0x4074], esi
        mov     dword ptr [ebx + 0x4078], esi
        mov     dword ptr [ebx + 0x407c], esi
        mov     dword ptr [ebx + 0x4080], esi
        mov     dword ptr [ebx + 0x41f0], 0x1
        mov     dword ptr [eax], esi
        mov     dword ptr [edi], esi
        mov     dword ptr [ebx + 0x41ec], esi
        mov     dword ptr [ebp], esi
        jz      L_4e9
        mov     edx, dword ptr [ecx]
        push    eax
        push    OFFSET g_5e0355a0
        push    ecx
        call    dword ptr [edx]
L_4e9:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, esi
        jz      L_50b
        mov     ecx, dword ptr [eax]
        push    edi
        push    OFFSET g_5e035650
        push    eax
        call    dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x18]
        push    ebp
        push    OFFSET g_5e035660
        push    eax
        mov     edx, dword ptr [eax]
        call    dword ptr [edx]
L_50b:
        lea     eax, [ebx + 0x438c]
        push    eax
        call    FUN_5e0121d0
        lea     ecx, [ebx + 0x43cc]
        push    ecx
        call    FUN_5e0121d0
        lea     edx, [ebx + 0x440c]
        push    edx
        call    FUN_5e0121d0
        lea     eax, [ebx + 0x444c]
        push    eax
        call    FUN_5e0121d0
        mov     ecx, 0x10
        xor     eax, eax
        lea     edi, [ebx + 0x448c]
        mov     dword ptr [g_5e77a6c8], 0x3f800000
        rep stosd
        mov     ecx, 0x10
        lea     edi, [ebx + 0x44cc]
        rep stosd
        mov     ecx, 0x10
        lea     edi, [ebx + 0x450c]
        rep stosd
        mov     ecx, 0xb
        lea     edi, [ebx + 0x454c]
        rep stosd
        mov     eax, 0x47c35000
        mov     dword ptr [ebx + 0x4584], esi
        mov     dword ptr [ebx + 0x458c], esi
        mov     dword ptr [ebx + 0x45a0], esi
        mov     dword ptr [ebx + 0x45a4], esi
        mov     word ptr [ebx + 0x45a8], si
        mov     dword ptr [ebx + 0x4580], eax
        mov     dword ptr [ebx + 0x4588], eax
        lea     edi, [ebx + 0x45ac]
        mov     ecx, 0x98
        mov     esi, OFFSET g_5e038158
        mov     eax, 0x3f800000
        rep movsd
        mov     dword ptr [ebx + 0x4598], eax
        mov     dword ptr [ebx + 0x459c], eax
        mov     ecx, 0x19
        xor     eax, eax
        lea     edi, [ebx + 0x4810]
        rep stosd
        pop     edi
        pop     esi
        mov     dword ptr [ebx + 0x4874], 0x1
        mov     eax, ebx
        pop     ebp
        pop     ebx
        ret     8
    }
}
