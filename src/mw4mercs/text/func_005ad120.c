/*
 * FUN_005AD120 (191 B) — __thiscall (ECX = this), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c40e0(void);
extern void __cdecl FUN_00557f60(void);

__declspec(naked) void __stdcall FUN_005AD120(void)
{
    

extern int DAT_007dc6e0;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov     al, byte ptr [esp + 0x4]
        push    ebx
        xor     ebx, ebx
        cmp     al, bl
        jz      L1A2
        fld     dword ptr [ecx + 0x30]
        push    esi
        mov esi, dword ptr [DAT_007dc6e0]
        push    ecx
        lea     eax, [ecx + 0x2c]
        fstp    dword ptr [esp]
        fld     dword ptr [ecx + 0x28]
        push    eax
        push    ecx
        mov     byte ptr [ecx + 0x21], 0x1
        fstp    dword ptr [esp]
        fld     dword ptr [ecx + 0x24]
        push    ecx
        mov     ecx, dword ptr [esi + 0x4c]
        mov     ecx, dword ptr [ecx + 0x24]
        fstp    dword ptr [esp]
        call    FUN_004c40e0
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x18]
        add     eax, 0x18
        xor     ecx, 0x85739531
        cmp     dword ptr [ecx + 0x178], ebx
        mov     dword ptr [esi + 0x64], ebx
        mov     dword ptr [esi + 0x68], ebx
        mov     dword ptr [esi + 0x6c], ebx
        mov     dword ptr [esi + 0x70], ebx
        pop     esi
        jz      L1DB
        mov     edx, dword ptr [eax]
        push    ebx
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x178]
        push    ebx
        call    FUN_00557f60
        pop     ebx
        ret     4
L1A2:
        mov eax, dword ptr [DAT_007dab44]
        mov     byte ptr [ecx + 0x21], bl
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x18]
        lea     eax, [ecx + 0x18]
        xor     edx, 0x85739531
        cmp     dword ptr [edx + 0x178], ebx
        jz      L1DB
        mov     eax, dword ptr [eax]
        push    ebx
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x178]
        push    0x1
        call    FUN_00557f60
L1DB:
        pop     ebx
        ret     4
    }


}
