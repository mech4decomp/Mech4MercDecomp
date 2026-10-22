/*
 * FUN_5e02f1fe (386 B) — console/stream setup dispatcher. Handles a set of
 * "mode" values (2, 0xf, 0x15, 0x16, 8, 4, 0xb) by installing console ctrl
 * handlers / caching function pointers, or initializing a buffer via
 * FUN_5e02f564. Returns -1 on unsupported mode.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *FUN_5e02bdd2(void);
extern void *FUN_5e02b6e4(int);
extern void FUN_5e02ed40(void *, void *, int);
extern int FUN_5e02f564(int, void *);
extern void FUN_5e02c830(int);
extern void FUN_5e02c891(int);
extern void *FUN_5e030981(void);
extern void *FUN_5e030978(void);
extern void __cdecl FUN_5e02f380(void);
extern void *g_5e0350c4;   /* IAT: SetConsoleCtrlHandler */
extern void *g_5e035050;   /* IAT: GetLastError */
extern char g_5e039400[];  /* buffer */
extern int g_5e039480;     /* buffer size */
extern int g_5e039484;     /* element count */
extern int g_5e77aa60;
extern int g_5e77aa58;
extern int g_5e77aa54;
extern int g_5e77aa5c;
extern int g_5e77aa50;

__declspec(naked) void FUN_5e02f1fe(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp+0xc]
        push edi
        cmp esi, 4
        jz L_f334
        cmp esi, 3
        jz L_f334
        mov ebx, dword ptr [ebp+0x8]
        cmp ebx, 2
        jz L_f2cc
        cmp ebx, 0x15
        jz L_f2cc
        cmp ebx, 0x16
        jz L_f2cc
        cmp ebx, 0xf
        jz L_f2cc
        cmp ebx, 8
        jz L_f253
        cmp ebx, 4
        jz L_f253
        cmp ebx, 0xb
        jnz L_f334
L_f253:
        call FUN_5e02bdd2
        mov esi, eax
        mov edi, offset g_5e039400
        cmp dword ptr [esi+0x50], edi
        jnz L_f28b
        push dword ptr [g_5e039480]
        call FUN_5e02b6e4
        test eax, eax
        pop ecx
        mov dword ptr [esi+0x50], eax
        jz L_f334
        push dword ptr [g_5e039480]
        push edi
        push eax
        call FUN_5e02ed40
        add esp, 0xc
L_f28b:
        push dword ptr [esi+0x50]
        push ebx
        call FUN_5e02f564
        pop ecx
        test eax, eax
        pop ecx
        jz L_f334
        mov edi, dword ptr [eax+0x8]
L_f2a1:
        cmp dword ptr [eax+0x4], ebx
        jnz L_f37c
        mov ecx, dword ptr [ebp+0xc]
        mov dword ptr [eax+0x8], ecx
        mov ecx, dword ptr [g_5e039484]
        mov edx, dword ptr [esi+0x50]
        add eax, 0xc
        lea ecx, [ecx+ecx*2]
        lea ecx, [edx+ecx*4]
        cmp eax, ecx
        jnc L_f37c
        jmp L_f2a1
L_f2cc:
        push 1
        pop edi
        push edi
        call FUN_5e02c830
        cmp ebx, 2
        pop ecx
        jz L_f2e0
        cmp ebx, 0x15
        jnz L_f2ff
L_f2e0:
        cmp dword ptr [g_5e77aa60], 0
        jnz L_f2ff
        push edi
        push offset FUN_5e02f380
        call dword ptr [g_5e0350c4]
        cmp eax, edi
        jnz L_f31e
        mov dword ptr [g_5e77aa60], edi
L_f2ff:
        dec ebx
        dec ebx
        jz L_f363
        sub ebx, 0xd
        jz L_f355
        sub ebx, 6
        jz L_f347
        dec ebx
        jnz L_f371
        mov edi, dword ptr [g_5e77aa58]
        mov dword ptr [g_5e77aa58], esi
        jmp L_f374
L_f31e:
        call dword ptr [g_5e035050]
        mov esi, eax
        call FUN_5e030981
        push edi
        mov dword ptr [eax], esi
        call FUN_5e02c891
        pop ecx
L_f334:
        call FUN_5e030978
        mov dword ptr [eax], 0x16
        or eax, 0xffffffff
L_f342:
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
L_f347:
        mov edi, dword ptr [g_5e77aa54]
        mov dword ptr [g_5e77aa54], esi
        jmp L_f374
L_f355:
        mov edi, dword ptr [g_5e77aa5c]
        mov dword ptr [g_5e77aa5c], esi
        jmp L_f374
L_f363:
        mov edi, dword ptr [g_5e77aa50]
        mov dword ptr [g_5e77aa50], esi
        jmp L_f374
L_f371:
        mov edi, dword ptr [ebp+0xc]
L_f374:
        push 1
        call FUN_5e02c891
        pop ecx
L_f37c:
        mov eax, edi
        jmp L_f342
    }
}
