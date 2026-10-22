/*
 * FUN_0065bc00 (278 B) — __thiscall (ECX = this), RET 0.
 * Updates a target/render state, computing a 3-vector.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7f25c0;   /* 0x007f25c0 */

extern void *__cdecl FUN_005dd7a0(void *p);
extern void __cdecl FUN_0069eb70(int a, void *b);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_0065ab00(void *a, int b);
extern char __cdecl FUN_00415230(int a);
extern void *__cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005c1720(int a);
extern void __cdecl FUN_005c5a60(void *p);
extern void *__cdecl FUN_0065acd0(void *p);

__declspec(naked) void __stdcall FUN_0065bc00(void)
{
    __asm {
        sub     esp, 0x10
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0x2C]
        test    al, al
        jz      L_bc43
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi + 0x4]
        call    FUN_005dd7a0
        mov     ecx, dword ptr [esi + 0xC]
        push    eax
        push    0x4
        call    FUN_0069eb70
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jz      L_bc43
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_bc43
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_bc43:
        mov     edi, dword ptr [esi + 0x4]
        push    0x0
        push    edi
        call    FUN_0065ab00
        mov     eax, dword ptr [g_7f25c0]
        mov     edx, dword ptr [edi + 0x170]
        mov     ecx, dword ptr [edx + 0x4]
        add     esp, 0x8
        push    eax
        mov     byte ptr [edi + 0x614], 0x1
        mov     byte ptr [esi + 0x20], 0x0
        mov     byte ptr [esi + 0x21], 0x0
        call    FUN_00415230
        test    al, al
        jnz     L_bc7f
        lea     eax, [esp + 0xC]
        push    eax
        jmp     L_bcf8
L_bc7f:
        mov     eax, dword ptr [esi + 0x8]
        mov     eax, dword ptr [eax + 0x3B0]
        test    eax, eax
        jz      L_bcf3
        lea     edi, [eax + 0x6A8]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_bcf3
        mov     ecx, edi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xD8]
        mov     ecx, dword ptr [eax + 0x9C]
        fld     dword ptr [eax + 0x8C]
        mov     edx, dword ptr [eax + 0xAC]
        fstp    dword ptr [esi + 0x14]
        add     eax, 0x80
        lea     edi, [esi + 0x14]
        mov     eax, ecx
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, edx
        mov     dword ptr [edi + 0x4], eax
        mov     esi, dword ptr [esi + 0x4]
        mov     dword ptr [edi + 0x8], ecx
        push    0x1
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edx
        call    FUN_005c1720
        push    edi
        mov     ecx, esi
        call    FUN_005c5a60
        pop     edi
        pop     esi
        add     esp, 0x10
        ret
L_bcf3:
        lea     edx, [esp + 0xC]
        push    edx
L_bcf8:
        mov     ecx, esi
        call    FUN_0065acd0
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        pop     edi
        mov     dword ptr [esi + 0x14], ecx
        mov     dword ptr [esi + 0x18], edx
        mov     dword ptr [esi + 0x1C], eax
        pop     esi
        add     esp, 0x10
        ret
    }
}
