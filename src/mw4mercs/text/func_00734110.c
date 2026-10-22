/*
 * FUN_00734110 (335 B) — __fastcall destructor. Removes the node
 * matching this (ECX) from the global linked list at DAT_00857f38,
 * then frees the object's member buffers.
 *
 * __fastcall (ECX = this), RET (no stack args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_857f38;                /* DAT_00857f38 list head */
extern int g_857f3c;                  /* DAT_00857f3c count */
extern void *g_76b2d0;                /* IAT: free */
extern char g_8aa288;                 /* DAT_008aa288 */
extern int g_8aa284;                  /* DAT_008aa284 */

extern void __fastcall FUN_007343a0(void *this);
extern void __stdcall FUN_00740db0(void *p);
extern void __stdcall FUN_006f4940(int a, int b, int c);
extern void __stdcall FUN_00717c10(void *p);
extern void __stdcall FUN_006f4230(void *p);

__declspec(naked) void __fastcall FUN_00734110(int *param_1)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [g_857f38]
        xor     ebx, ebx
        cmp     edi, ebx
        mov     esi, ecx
        jz      L_418c
        cmp     dword ptr [edi + 0xc], esi
        mov     eax, dword ptr [edi + 0x4]
        jnz     L_414c
        mov     edx, dword ptr [g_857f3c]
        dec     edx
        mov     dword ptr [edi + 0x8], ebx
        push    edi
        mov     dword ptr [g_857f38], eax
        mov     dword ptr [g_857f3c], edx
        mov     dword ptr [edi], ebx
        call    dword ptr [g_76b2d0]
        add     esp, 0x4
        jmp     L_418c
L_414c:
        cmp     eax, ebx
        jz      L_418c
L_4150:
        cmp     dword ptr [eax + 0xc], esi
        jz      L_4160
        mov     edi, eax
        mov     eax, dword ptr [edi + 0x4]
        cmp     eax, ebx
        jnz     L_4150
        jmp     L_418c
L_4160:
        mov     eax, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [edi + 0x4], ecx
        mov     ecx, dword ptr [eax + 0x4]
        cmp     ecx, ebx
        jz      L_4173
        mov     dword ptr [ecx + 0x8], edi
L_4173:
        mov     edx, dword ptr [g_857f3c]
        dec     edx
        push    eax
        mov     dword ptr [g_857f3c], edx
        call    dword ptr [g_76b2d0]
        add     esp, 0x4
        mov     dword ptr [edi], ebx
L_418c:
        cmp     byte ptr [g_8aa288], bl
        jnz     L_424d
        cmp     dword ptr [esi + 0xa8], 0x3
        jz      L_41a8
        mov     ecx, esi
        call    FUN_007343a0
L_41a8:
        mov     eax, dword ptr [esi + 0x28]
        cmp     eax, ebx
        jz      L_41b8
        push    eax
        call    FUN_00740db0
        mov     dword ptr [esi + 0x28], ebx
L_41b8:
        mov     edi, dword ptr [esi + 0x24]
        cmp     edi, ebx
        jz      L_41e7
        cmp     dword ptr [esi + 0xe8], ebx
        jnz     L_41de
        mov     edx, dword ptr [esi + 0x3c]
        imul    edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [g_8aa284]
        push    0x1
        neg     edx
        push    edx
        push    eax
        call    FUN_006f4940
L_41de:
        push    edi
        call    FUN_00740db0
        mov     dword ptr [esi + 0x24], ebx
L_41e7:
        mov     eax, dword ptr [esi + 0x18]
        cmp     eax, ebx
        jz      L_41f7
        push    eax
        call    FUN_00740db0
        mov     dword ptr [esi + 0x18], ebx
L_41f7:
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, ebx
        jz      L_4207
        push    eax
        call    FUN_00740db0
        mov     dword ptr [esi + 0x4], ebx
L_4207:
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, ebx
        jz      L_4217
        push    eax
        call    FUN_00740db0
        mov     dword ptr [esi + 0xc], ebx
L_4217:
        mov     eax, dword ptr [esi + 0x8]
        cmp     eax, ebx
        jz      L_4227
        push    eax
        call    FUN_00740db0
        mov     dword ptr [esi + 0x8], ebx
L_4227:
        mov     eax, dword ptr [esi + 0x10]
        cmp     eax, ebx
        jz      L_4237
        push    eax
        call    FUN_00740db0
        mov     dword ptr [esi + 0x10], ebx
L_4237:
        mov     eax, dword ptr [esi + 0xe8]
        cmp     eax, ebx
        jz      L_424d
        push    eax
        call    FUN_00717c10
        mov     dword ptr [esi + 0xe8], ebx
L_424d:
        mov     eax, dword ptr [esi]
        cmp     eax, ebx
        jz      L_425b
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], ebx
L_425b:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
