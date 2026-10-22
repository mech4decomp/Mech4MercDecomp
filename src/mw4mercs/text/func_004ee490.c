/*
 * FUN_004ee490 (78 B) — cdecl. Stores arg into global 0x7dc800, then
 * walks a linked list rooted at *0x7dc7fc, invoking two virtual calls
 * per node (via 0x7dc800's vtable).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc800;
extern int g_007dc7fc;
extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void FUN_004ee490(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    ebx
        push    esi
        mov     dword ptr [g_007dc800], eax
        mov     eax, dword ptr [g_007dc7fc]
        push    edi
        mov     edi, dword ptr [eax]
L_004ee4a3:
        test    edi, edi
        jz      L_004ee4da
        mov     eax, dword ptr [edi]
        test    eax, eax
        mov     edi, dword ptr [edi+0x4]
        jz      L_004ee4da
        mov     ecx, dword ptr [g_007dc800]
        mov     ebx, dword ptr [ecx]
        lea     esi, [eax+0x10]
        mov     ecx, esi
        call    FUN_0041fd80
        mov     ecx, dword ptr [g_007dc800]
        push    eax
        call    dword ptr [ebx+0x8]
        mov     ecx, esi
        call    FUN_0041fd80
        mov     ecx, eax
        call    dword ptr [eax+0x1c]
        jmp     L_004ee4a3
L_004ee4da:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
