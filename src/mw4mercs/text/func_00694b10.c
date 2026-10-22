/*
 * FUN_00694b10 (196 B) — __thiscall constructor, RET 0xC (3 stack args).
 *
 * Initializes two sub-objects (this+0x8 and this+0xC) via FUN_00547ba0 /
 * FUN_0067c040, then a third sub-object at this+0x28 via FUN_005634e0(8).
 * Increments global counter 0x0082db1c. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_82db1c;              /* 0x0082db1c */
extern void __cdecl FUN_00547ba0(void);
extern void __cdecl FUN_0067c040(void);
extern void __cdecl FUN_005634e0(void);

__declspec(naked) void *__cdecl FUN_00694b10(void *this, int param_1,
                                             void *param_2, void *param_3)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        mov     al, byte ptr [edi + 0x8]
        lea     ecx, [esp + 0x10]
        push    ecx
        xor     ebx, ebx
        lea     edx, [esp + 0x20]
        push    edx
        lea     ecx, [esi + 0x8]
        mov     byte ptr [esp + 0x24], al
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi + 0x4], ebx
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_00547ba0
        mov     eax, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [edi]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_0067c040
        mov     ebp, dword ptr [esp + 0x20]
        mov     dl, byte ptr [ebp + 0x8]
        lea     eax, [esp + 0x20]
        lea     edi, [esi + 0xc]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [edi + 0x8]
        mov     byte ptr [esp + 0x24], dl
        mov     dword ptr [edi], ebx
        mov     dword ptr [edi + 0x4], ebx
        mov     dword ptr [esp + 0x28], ebx
        call    FUN_00547ba0
        mov     edx, dword ptr [ebp + 0x4]
        mov     eax, dword ptr [ebp]
        push    edx
        push    eax
        mov     ecx, edi
        call    FUN_0067c040
        mov     cl, byte ptr [esp + 0x1c]
        mov     al, byte ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x18], ebx
        mov     byte ptr [esi + 0x20], cl
        lea     edi, [esi + 0x28]
        mov     dword ptr [esi + 0x20], ebx
        mov     dword ptr [edi], ebx
        mov     dword ptr [esi + 0x1c], ebx
        mov     byte ptr [edi + 0x8], al
        push    0x8
        mov     ecx, edi
        mov     dword ptr [esi + 0x24], edx
        mov     dword ptr [edi + 0x4], ebx
        mov     dword ptr [edi + 0x8], ebx
        call    FUN_005634e0
        mov     eax, dword ptr [g_82db1c]
        mov     ecx, dword ptr [edi + 0x4]
        inc     eax
        pop     edi
        mov     dword ptr [esi + 0x34], ebx
        mov     dword ptr [g_82db1c], eax
        mov     eax, esi
        pop     esi
        pop     ebp
        mov     byte ptr [ecx], bl
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
