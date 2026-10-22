/*
 * FUN_005acfa0 (215 B) — __thiscall (ECX = this).
 *
 * If this->0x20 != 0: iterate linked list at this->0x10 calling
 * FUN_005ae440() on each node's [0]; call FUN_0041fcb0(this+0x18);
 * zero 4 dwords at DAT_007dc6e0+0x64..0x70; call FUN_005ad080(1) and
 * FUN_005ad120(1) (this=this); conditionally call FUN_00548f40 /
 * FUN_00557350 / FUN_00557230 / FUN_00557f60; finally call
 * FUN_004c40e0 with 4 float args from this->0x24/0x28/0x2c/0x30.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005ae440(void *this);
extern void __fastcall FUN_0041fcb0(void *this);
extern void __fastcall FUN_005ad080(void *this, int param);
extern void __fastcall FUN_005ad120(void *this, int param);
extern void __fastcall FUN_00548f40(void *this);
extern int  __fastcall FUN_00557350(void *this);
extern void __fastcall FUN_00557230(void *this, int param);
extern void __fastcall FUN_00557f60(void *this, int a, int b);
extern void __fastcall FUN_004c40e0(void *this, float a, float b, void *c, float d);

__declspec(naked) void __fastcall FUN_005acfa0(void)
{
    

extern int DAT_007dc6e0;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    ebx
        push    edi
        mov     edi, ecx
        mov     al, byte ptr [edi + 0x20]
        xor     ebx, ebx
        cmp     al, bl
        jz      L_74
        push    esi
        mov     esi, dword ptr [edi + 0x10]
        mov     byte ptr [edi + 0x20], bl
L_b8:
        cmp     esi, ebx
        jz      L_cc
        mov     ecx, dword ptr [esi]
        cmp     ecx, ebx
        jz      L_cc
        call    FUN_005ae440
        mov     esi, dword ptr [esi + 0x4]
        jmp     L_b8
L_cc:
        lea     ecx, [edi + 0x18]
        call    FUN_0041fcb0
        mov eax, dword ptr [DAT_007dc6e0]
        push    1
        mov     ecx, edi
        mov     dword ptr [eax + 0x64], ebx
        mov     dword ptr [eax + 0x68], ebx
        mov     dword ptr [eax + 0x6c], ebx
        mov     dword ptr [eax + 0x70], ebx
        call    FUN_005ad080
        push    1
        mov     ecx, edi
        call    FUN_005ad120
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x18]
        lea     eax, [ecx + 0x18]
        xor     edx, 0x85739531
        cmp     dword ptr [edx + 0x178], ebx
        jz      L_4a
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     esi, dword ptr [eax + 0x178]
        mov     ecx, esi
        call    FUN_00548f40
        mov     ecx, esi
        call    FUN_00557350
        push    eax
        mov     ecx, esi
        call    FUN_00557230
        mov     ecx, dword ptr [esi + 0x564]
        push    ebx
        push    ecx
        mov     ecx, esi
        call    FUN_00557f60
L_4a:
        fld     dword ptr [edi + 0x30]
        mov eax, dword ptr [DAT_007dc6e0]
        push    ecx
        lea     edx, [edi + 0x2c]
        fstp    dword ptr [esp]
        fld     dword ptr [edi + 0x28]
        push    edx
        push    ecx
        fstp    dword ptr [esp]
        fld     dword ptr [edi + 0x24]
        push    ecx
        mov     ecx, dword ptr [eax + 0x4c]
        mov     ecx, dword ptr [ecx + 0x24]
        fstp    dword ptr [esp]
        call    FUN_004c40e0
        pop     esi
L_74:
        pop     edi
        pop     ebx
        ret
    }


}
