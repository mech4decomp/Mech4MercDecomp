/*
 * FUN_005e4400 (473 B) — Constructor with sub-object setup.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 * Calls FUN_005ed0e0(this, p1, p2), initializes sub-objects at
 * this+0x258/0x260/0x26c, conditionally builds a linked structure
 * via FUN_004cdfa0/FUN_004ceeb0, and fills many fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005ed0e0(void);
extern void FUN_0041fcb0(void);
extern void FUN_004cdfa0(void);
extern void FUN_004ceeb0(void);
extern void FUN_0041fcd0(void);
extern void FUN_0041fd80(void);
extern void FUN_0041c7d0(void);
extern void FUN_005e6590(void);
extern void FUN_00415230(void);
extern void FUN_00767430(void);
extern void FUN_005e4360(void);

__declspec(naked) void __stdcall FUN_005e4400(void)
{
    

extern int DAT_007dc694;
extern int DAT_007dc696;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f268c;
__asm {
mov     eax, dword ptr [esp + 0x8]
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        push    ebx
        call    FUN_005ed0e0
        lea     ebp, [esi + 0x258]
        mov     ecx, ebp
        call    FUN_0041fcb0
        mov     ecx, dword ptr [ebx + 0xb8]
        mov     edx, dword ptr [ebx + 0xbc]
        lea     edi, [esi + 0x26c]
        mov     dword ptr [edi], ecx
        mov     ecx, dword ptr [ebx + 0xc0]
        add     ebx, 0xb4
        xor     eax, eax
        mov     dword ptr [edi + 0x4], edx
        mov     dl, byte ptr [ebx]
        mov     dword ptr [edi + 0x8], ecx
        cmp dl, byte ptr [DAT_007dc694]
        mov     dword ptr [esi + 0x278], eax
        mov     dword ptr [esi + 0x27c], eax
        mov     dword ptr [esi + 0x280], eax
        jnz     L_447a
        mov     cx, word ptr [ebx + 0x2]
        cmp cx, word ptr [DAT_007dc696]
        jz      L_4558
L_447a:
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [ebx]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        jz      L_4556
        push    ebx
        mov     ecx, eax
        call    FUN_004ceeb0
        mov     ebx, eax
        test    ebx, ebx
        jz      L_4556
        mov     ecx, ebp
        call    FUN_0041fcb0
        push    ebx
        mov     ecx, ebp
        call    FUN_0041fcd0
        lea     ebx, [esi + 0x260]
        mov     ecx, ebx
        call    FUN_0041fcb0
        mov     ecx, dword ptr [edi + 0x8]
        mov     edx, dword ptr [edi]
        mov     eax, dword ptr [edi + 0x4]
        mov     dword ptr [esi + 0x280], ecx
        mov     ecx, dword ptr [edi + 0x8]
        mov     dword ptr [esi + 0x278], edx
        mov     edx, dword ptr [edi]
        mov     dword ptr [esi + 0x27c], eax
        mov     eax, dword ptr [edi + 0x4]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], eax
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     edx, [esp + 0x14]
        push    edx
        mov     ecx, edi
        call    FUN_0041c7d0
        mov     ecx, ebp
        call    FUN_0041fd80
        push    eax
        mov     ecx, esi
        call    FUN_005e6590
        mov     ecx, ebx
        mov     ebp, eax
        call    FUN_0041fcb0
        test    ebp, ebp
        jz      L_4556
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_4556
        push    ebp
        mov     ecx, ebx
        call    FUN_0041fcd0
L_4556:
        xor     eax, eax
L_4558:
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [edi + 0x4]
        mov     dword ptr [esi + 0x284], ecx
        mov     ecx, dword ptr [edi + 0x8]
        mov     dword ptr [esi + 0x288], edx
        lea     edx, [esi + 0x1e0]
        mov     dword ptr [esi + 0x28c], ecx
        push    edx
        lea     ecx, [esi + 0x29c]
        mov     dword ptr [esi + 0x290], eax
        mov     byte ptr [esi + 0x298], 0x1
        mov     byte ptr [esi + 0x299], 0x0
        mov     dword ptr [esi + 0x2b8], eax
        mov     dword ptr [esi + 0x2bc], eax
        mov     dword ptr [esi + 0x2c0], 0xbf19999a
        mov     dword ptr [esi + 0x2c4], 0x3f4ccccd
        mov     dword ptr [esi + 0x2c8], eax
        call    FUN_00767430
        mov     ecx, esi
        mov     dword ptr [esi + 0x2b4], 0
        call    FUN_005e4360
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x8
    }


}
