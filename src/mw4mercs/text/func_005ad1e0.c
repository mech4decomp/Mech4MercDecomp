/*
 * FUN_005AD1E0 (96 B) — __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005AD080(void);
extern void __cdecl FUN_0041FCB0(void);
extern void __cdecl FUN_004C40E0(void);

__declspec(naked) void __stdcall FUN_005AD1E0(void)
{
    

extern int DAT_007dc6e0;
__asm {
push    ebx
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x20]
        xor     ebx, ebx
        cmp     al, bl
        jz      L23D
        push    0x1
        mov     byte ptr [esi + 0x20], bl
        call    FUN_005AD080
        mov eax, dword ptr [DAT_007dc6e0]
        lea     ecx, [esi + 0x18]
        mov     dword ptr [eax + 0x64], ebx
        mov     dword ptr [eax + 0x68], ebx
        mov     dword ptr [eax + 0x6c], ebx
        mov     dword ptr [eax + 0x70], ebx
        call    FUN_0041FCB0
        mov eax, dword ptr [DAT_007dc6e0]
        mov     eax, dword ptr [eax + 0x4c]
        cmp     eax, ebx
        jz      L23D
        fld     dword ptr [esi + 0x30]
        push    ecx
        lea     ecx, [esi + 0x2c]
        fstp    dword ptr [esp]
        fld     dword ptr [esi + 0x28]
        push    ecx
        push    ecx
        fstp    dword ptr [esp]
        fld     dword ptr [esi + 0x24]
        push    ecx
        mov     ecx, dword ptr [eax + 0x24]
        fstp    dword ptr [esp]
        call    FUN_004C40E0
L23D:
        pop     esi
        pop     ebx
        ret
    }


}
