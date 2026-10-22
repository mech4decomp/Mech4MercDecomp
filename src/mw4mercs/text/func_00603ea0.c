/*
 * FUN_00603ea0 (224 B) — __thiscall (RET 0xC, 3 params) weapon-render
 * "set/load" routine. Guards against re-entry via the +0x1d flag, allocates
 * a child via FUN_00603e30, and wires it into one of the sub-objects at
 * +0x40/+0x48/+0x50 (with a virtual call through the +0x40 object's vtable
 * in one path). Returns -1 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00603e30(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_00603e60(void);

__declspec(naked) void FUN_00603ea0(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x14]
        cmp     ebp, eax
        push    edi
        jz      loc_603f79
        mov     al, byte ptr [esi + 0x1d]
        xor     ebx, ebx
        cmp     al, bl
        jnz     loc_603f76
        push    ebp
        mov     byte ptr [esi + 0x1d], 0x1
        mov     byte ptr [esi + 0x1e], bl
        mov     byte ptr [esi + 0x1f], bl
        mov     byte ptr [esi + 0x20], bl
        mov     dword ptr [esi + 0x28], ebp
        call    FUN_00603e30
        mov     edi, eax
        cmp     edi, ebx
        jnz     loc_603f0c
        lea     edi, [esi + 0x40]
        mov     ecx, edi
        mov     byte ptr [esi + 0x1d], bl
        call    FUN_0041fd80
        test    eax, eax
        jz      loc_603ef6
        mov     ecx, edi
        call    FUN_0041fcb0
loc_603ef6:
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esi + 0x28]
        pop     edi
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x14], ecx
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        ret     0xc
loc_603f0c:
        lea     ecx, [esi + 0x40]
        call    FUN_0041fd80
        test    eax, eax
        jz      loc_603f48
        push    edi
        lea     ecx, [esi + 0x48]
        mov     byte ptr [esi + 0x1e], 0x1
        call    FUN_0041fcd0
        mov     edx, dword ptr [esi + 0x14]
        push    ebp
        push    edx
        mov     ecx, esi
        call    FUN_00603e60
        cmp     eax, ebx
        jz      loc_603f76
        push    eax
        lea     ecx, [esi + 0x50]
        call    FUN_0041fcd0
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        ret     0xc
loc_603f48:
        push    edi
        lea     ecx, [esi + 0x40]
        mov     byte ptr [esi + 0x1d], bl
        mov     byte ptr [esi + 0x1e], 0x1
        call    FUN_0041fcd0
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi]
        push    ecx
        push    0xbf800000
        push    ebx
        mov     ecx, edi
        call    dword ptr [eax + 0x18]
        mov     edx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [esi + 0x28]
        mov     dword ptr [esi + 0x10], edx
        mov     dword ptr [esi + 0x14], eax
loc_603f76:
        or      eax, 0xffffffff
loc_603f79:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
