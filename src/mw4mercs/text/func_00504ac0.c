/*
 * FUN_00504AC0 (236 B) — Execution flags setup (Simulation/Renderer/Shared/ReceiveCommands)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int func_00504AC0(void)
{
    

/* extern data/function symbols */
extern void __cdecl FUN_100411e8d(void);
extern void __cdecl FUN_100411e6c(void);
extern void __cdecl FUN_006fab10(void);
extern void __cdecl FUN_100411e26(void);
extern void __cdecl FUN_100411e05(void);
extern int DAT_007dc860;
__asm {
push    ebp
        mov     ebp, esp
        push    ecx
        push    esi
        push    edi
        mov     edi, [ebp+8]
        mov     esi, [edi]
        mov     eax, [esi]
        push    0x24
        mov     ecx, esi
        call    dword ptr [eax+0x14]
        mov     edx, [esi]
        push    4
        lea     eax, [edi+4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        mov     edi, [edi+8]
        push    0
        lea     ecx, [ebp+0xB]
        push    ecx
        push    0x776C54
        mov     ecx, edi
        mov     dword ptr [ebp-4], 0
        call FUN_100411e8d
        test    al, al
        je      skip_sim
        mov     al, byte ptr [ebp+0xB]
        test    al, al
        je      skip_sim
        or      dword ptr [ebp-4], 2

skip_sim:
        push    0
        lea     edx, [ebp+0xB]
        push    edx
        push    0x776C3C
        mov     ecx, edi
        call FUN_100411e6c
        test    al, al
        je      skip_render
        mov     al, byte ptr [ebp+0xB]
        test    al, al
        je      skip_render
        mov     eax, [ebp-4]
        or      eax, 4
        test    al, 2
        mov     [ebp-4], eax
        je      skip_render
        mov     eax, [edi+0x14]
        mov     ecx, [edi+0x10]
        mov     edx, [ecx]
        push    eax
        push    edx
        push    0x776BF4
        call FUN_006fab10
        add     esp, 0xC
        test    eax, eax
        je      skip_render
        int     3

skip_render:
        push    0
        lea     eax, [ebp+0xB]
        push    eax
        push    0x776BEC
        mov     ecx, edi
        call FUN_100411e26
        test    al, al
        je      skip_shared
        mov     al, byte ptr [ebp+0xB]
        test    al, al
        je      skip_shared
        or      dword ptr [ebp-4], 1

skip_shared:
        push    0
        lea     ecx, [ebp+0xB]
        push    ecx
        push    0x776BD8
        mov     ecx, edi
        call FUN_100411e05
        test    al, al
        je      skip_cmd
        mov     al, byte ptr [ebp+0xB]
        test    al, al
        je      skip_cmd
        or      dword ptr [ebp-4], 0x20

skip_cmd:
        mov     edx, [esi]
        push    4
        lea     eax, [ebp-4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        mov eax, dword ptr [DAT_007dc860]
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }


}
