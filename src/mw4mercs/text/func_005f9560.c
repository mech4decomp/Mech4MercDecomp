/*
 * FUN_005f9560 (137 B) — __thiscall, 1 stack arg (RET 4). Iterates a linked
 * list at this+0x34c, dispatching virtual methods on a stream object and
 * calling FUN_005f97b0 per node; then finalizes via FUN_005faf20 /
 * FUN_005b9d60 if this+0x3d4 is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005f97b0(void);
extern void FUN_005faf20(void);
extern void FUN_005b9d60(void);

__declspec(naked) void FUN_005f9560(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp+0x14]
        mov     eax, dword ptr [esi]
        mov     ebx, ecx
        mov     ebp, dword ptr [ebx+0x34c]
        push    edi
        push    2
        mov     ecx, esi
        mov     dword ptr [esp+0x14], ebx
        call    dword ptr [eax+0x18]
L_957e:
        test    ebp, ebp
        jz      L_95c2
        mov     edi, dword ptr [ebp]
        test    edi, edi
        mov     ebp, dword ptr [ebp+0x4]
        jz      L_95c2
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+0x8]
        test    eax, eax
        jbe     L_95c2
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+0x4]
        mov     edx, dword ptr [edi]
        mov     ebx, eax
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx+0x14]
        mov     ecx, dword ptr [esp+0x10]
        push    edi
        call    FUN_005f97b0
        mov     ecx, dword ptr [ebx]
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x18]
        mov     ebx, dword ptr [esp+0x10]
        jmp     L_957e
L_95c2:
        mov     eax, dword ptr [ebx+0x3d4]
        test    eax, eax
        jz      L_95e1
        mov     ecx, ebx
        call    FUN_005faf20
        mov     ecx, dword ptr [ebx+0x3d4]
        push    eax
        push    0
        call    FUN_005b9d60
L_95e1:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     4
    }
}
