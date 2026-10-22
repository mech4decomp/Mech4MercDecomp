/*
 * FUN_004e9d00 (524 B) — __thiscall. MLR/Adept core: (re)builds the renderer
 * object's internal state. Computes a hashed lookup key from globals
 * 0x7dab44/0x7dab40 and this->0x150/0x151, calls FUN_004e2b20, then sets up
 * a stream object at this+0x180 (FUN_004d21d0 + virtual calls), runs a 0x40-
 * iteration loop filling per-slot data, sets this->0x14c flags, and finally
 * walks a linked list at this+0x15c calling virtual methods / FUN_004ea3d0 /
 * FUN_00417ad0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004e2b20(void);
extern void __cdecl FUN_004d21d0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004e9cd0(void);
extern void __cdecl FUN_004ea3d0(void);
extern void __cdecl FUN_00417ad0(void);

extern int   g_007dab44;   /* DAT_007dab44 */
extern int   g_007dab40;   /* DAT_007dab40 */
extern short g_007db0ac;   /* DAT_007db0ac (word) */
extern short g_007db0ae;   /* DAT_007db0ae (word) */

__declspec(naked) void FUN_004e9d00(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        sub     esp, 0x14
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x1c]
        xor     ecx, 0x85739531
        xor     edx, edx
        mov     dl, byte ptr [ecx + 0x16a]
        xor     ecx, ecx
        mov     cl, byte ptr [edi + 0x150]
        imul    edx, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [edi + 0x151]
        add     edx, ecx
        mov     ecx, dword ptr [eax + 0x1c]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004e2b20
        mov     ebx, eax
        mov     dx, word ptr [ebx + 0x8]
        cmp     dx, word ptr [g_007db0ac]
        lea     eax, [ebx + 0x8]
        jnz     L9D69
        mov     cx, word ptr [eax + 0x2]
        cmp     cx, word ptr [g_007db0ae]
        jz      L9D88
L9D69:
        push    0x1
        lea     esi, [edi + 0x1c4]
        push    eax
        mov     ecx, esi
        call    FUN_004d21d0
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     dword ptr [edi + 0x208], eax
        jmp     L9D92
L9D88:
        mov     dword ptr [edi + 0x208], 0x0
L9D92:
        push    ebp
        push    0x1
        lea     esi, [edi + 0x180]
        add     ebx, 0x4
        push    ebx
        mov     ecx, esi
        call    FUN_004d21d0
        mov     eax, dword ptr [esi]
        push    0x2
        lea     ebx, [edi + 0x210]
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        xor     ecx, ecx
        mov     cx, word ptr [ebx]
        mov     dword ptr [edi + 0x20c], eax
        mov     eax, dword ptr [esi]
        shl     ecx, 0x4
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x18]
        xor     ebp, ebp
        mov     dword ptr [esp + 0x10], 0x40
L9DDD:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [edi + 0x17c]
        mov     edx, dword ptr [ecx + 0x144]
        mov     eax, dword ptr [esi]
        mov     ebx, dword ptr [edx + ebp*0x1]
        mov     ecx, esi
        call    dword ptr [eax + 0x4]
        mov     cx, word ptr [eax]
        mov     edx, dword ptr [esi]
        mov     word ptr [ebx + 0x16c], cx
        push    0x2
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [esi]
        mov     dword ptr [ebx + 0x168], eax
        xor     eax, eax
        mov     ax, word ptr [ebx + 0x16c]
        mov     ecx, esi
        lea     eax, [eax + eax*0x2]
        shl     eax, 0x1
        push    eax
        call    dword ptr [edx + 0x18]
        mov     eax, dword ptr [esp + 0x10]
        add     ebp, 0x4
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jnz     L9DDD
        mov     ecx, dword ptr [edi + 0x14c]
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        mov     esi, dword ptr [g_007dab40]
        and     ecx, 0xfffffeff
        or      ecx, 0x80
        mov     dword ptr [edi + 0x14c], ecx
        xor     eax, esi
        mov     ecx, dword ptr [eax + 0x1c]
        xor     ecx, 0x85739531
        push    edi
        add     ecx, 0x184
        call    FUN_004179b0
        lea     eax, [edi + 0x15c]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x18], 0x772d80
        mov     ebx, 0x180
        pop     ebp
L9EA0:
        test    eax, eax
        jz      L9F05
        mov     esi, dword ptr [eax]
        test    esi, esi
        jz      L9F05
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx + 0x48]
        push    esi
        lea     ecx, [edi + 0x164]
        call    FUN_004179b0
        mov     eax, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x74]
        test    al, al
        jnz     L9EEE
        test    dword ptr [edi + 0x14c], ebx
        jnz     L9EE2
        mov     ecx, edi
        call    FUN_004e9cd0
L9EE2:
        push    esi
        lea     ecx, [edi + 0x154]
        call    FUN_004179b0
L9EEE:
        push    esi
        mov     ecx, edi
        call    FUN_004ea3d0
        lea     ecx, [esp + 0x14]
        call    FUN_00417ad0
        mov     eax, dword ptr [esp + 0x1c]
        jmp     L9EA0
L9F05:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret
    }
}
