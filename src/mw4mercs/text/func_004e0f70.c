/*
 * FUN_004e0f70 (236 B) — MLR/Adept "VideoRenderer" object constructor
 * (__thiscall). Allocates several sub-objects (renderer, texture cache,
 * etc.) and stores them into globals / the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f3280(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00490660(void);
extern void __cdecl FUN_0048f210(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004ecdb0(void);
extern void __cdecl FUN_004c8eb0(void);

extern int g_007b95a4;
extern int g_007da848;
extern int g_007dc7e8;
extern int g_007dc7fc;

__declspec(naked) void FUN_004e0f70(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    ebx
        push    esi
        push    edi
        push    0x7730dc
        push    1
        mov     edi, ecx
        push    eax
        call    FUN_004f3280
        xor     ebx, ebx
        push    ebx
        lea     esi, [edi+0x50]
        push    ebx
        mov     ecx, esi
        call    FUN_00416990
        mov     ecx, dword ptr [g_007b95a4]
        mov     dword ptr [esi], 0x773bec
        push    ecx
        mov     dword ptr [edi], 0x773bc8
        call    FUN_006f4950
        push    0x1c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebx
        jz      L_0fcb
        mov     ecx, esi
        call    FUN_00490660
        mov     dword ptr [esi], 0x773bc4
        jmp     L_0fcd
L_0fcb:
        xor     esi, esi
L_0fcd:
        push    0x1003c
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebx
        jz      L_0fef
        push    3
        push    esi
        mov     ecx, eax
        call    FUN_0048f210
        mov     [g_007da848], eax
        jmp     L_0ff5
L_0fef:
        mov     dword ptr [g_007da848], ebx
L_0ff5:
        call    FUN_006f49a0
        push    0x34
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebx
        jz      L_1018
        mov     edx, dword ptr [g_007dc7e8]
        push    edx
        mov     ecx, eax
        call    FUN_004ecdb0
        jmp     L_101a
L_1018:
        xor     eax, eax
L_101a:
        push    2
        push    eax
        call    FUN_004c8eb0
        push    8
        call    FUN_004084d0
        add     esp, 0xc
        cmp     eax, ebx
        jz      L_1048
        mov     dword ptr [eax+4], ebx
        mov     dword ptr [eax], ebx
        mov     [g_007dc7fc], eax
        mov     dword ptr [edi+0x4c], ebx
        mov     dword ptr [edi+0x48], ebx
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     4
L_1048:
        mov     dword ptr [edi+0x4c], ebx
        mov     dword ptr [edi+0x48], ebx
        mov     eax, edi
        pop     edi
        pop     esi
        mov     dword ptr [g_007dc7fc], ebx
        pop     ebx
        ret     4
    }
}
